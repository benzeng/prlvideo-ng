
void _xmlSetCompressMode(int mode)

{
  if (mode < 0) {
    DAT_10231248c = 0;
  }
  else {
    DAT_10231248c = mode;
    if (9 < mode) {
      DAT_10231248c = 9;
    }
  }
  return;
}

