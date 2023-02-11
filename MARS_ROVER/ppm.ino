/*
int sampling = 20;

int filt_num = 10;
float filter_arr [8][10];

int get_t8s_ppm() {
  for ( int i = 0; i < 10 ; i++) {
    float read_num = ppm.read_channel(i + 1);

    float sum=0;
    for ( int j = 0; j < filt_num-1 ; j++){
      filter_arr[i][j] = filter_arr[i][j+1];
      sum += filter_arr[i][j+1];
    }
    filter_arr[i][filt_num-1]= read_num;
    sum += read_num;
    sum /= filt_num;

    sum = map(sum, 990, 2000, 0, 1000);
//    sum = int(map(sum, 0, 1000, 0, sampling));
//    sum = map(sum, 0, sampling, 0, 1000);
    mystick[i] = sum;
  }
  
}
*/

/*
mystick[0] = Rx
mystick[1] = Ry
mystick[2] = Ly
mystick[3] = Lx
mystick[4] = Rsw
mystick[5] = Rbut
mystick[6] = Lsw
mystick[7] = Lrow
*/
