
void _xmlSetCompressMode(int mode)

{
  if (mode < 0) {
    DAT_1011b770c = 0;
  }
  else {
    DAT_1011b770c = mode;
    if (9 < mode) {
      DAT_1011b770c = 9;
    }
  }
  return;
}

