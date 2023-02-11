int get_sbus() {
  for ( int i = 0; i < 10 ; i++) {
    mystick[i] = IBus.readChannel(i)-1000;
  }
}
