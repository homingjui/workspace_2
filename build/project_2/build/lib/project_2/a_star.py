class Node():
    def __init__(self, parent=None, position=None):
        self.parent = parent
        self.position = position
        self.g = 0
        self.h = 0
        self.f = 0

    def __eq__(self, other):
        return self.position == other.position
    

def astar(maze, start, end):
    start = (start[1],start[0])
    end = (end[1],end[0])


    start_node = Node(None, start)
    start_node.g = start_node.h = start_node.f = 0
    end_node = Node(None, end)
    end_node.g = end_node.h = end_node.f = 0

    open_list = []
    closed_list = []
    open_list.append(start_node)

    while len(open_list) > 0:

        current_node = open_list[0]
        current_index = 0
        for index, item in enumerate(open_list):
            if item.f < current_node.f:
                current_node = item
                current_index = index

        open_list.pop(current_index)
        closed_list.append(current_node)

        check_p = current_node.position
        if (current_node == end_node) or maze[check_p[0]][check_p[1]] ==2:
            path = []
            current = current_node
            while current is not None:
                path.append(current.position)
                current = current.parent
            return path[::-1] ,open_list,closed_list

        children = []
        for new_position in [(0, -1), (0, 1), (-1, 0), (1, 0)]:
#        for new_position in [(0, -1), (0, 1), (-1, 0), (1, 0), (-1, -1), (-1, 1), (1, -1), (1, 1)]:

            node_position = (current_node.position[0] + new_position[0], current_node.position[1] + new_position[1])
            if node_position[0] > (len(maze) - 1) or node_position[0] < 0 or node_position[1] > (len(maze[0]) -1) or node_position[1] < 0:
                continue
            if maze[node_position[0]][node_position[1]] == 1:
                continue
            new_node = Node(current_node, node_position)

            children.append(new_node)

        for child in children:

            # Child is on the closed list
            if child in closed_list: continue

            child.g = current_node.g + 1
            flag = False
            for open_node in open_list:
                if child == open_node and child.g > open_node.g:
                    flag = True
                    break
            if flag: continue
                
            child.h = ((child.position[0] - end_node.position[0]) ** 2) + ((child.position[1] - end_node.position[1]) ** 2)
            child.f = child.g + child.h

            open_list.append(child)


