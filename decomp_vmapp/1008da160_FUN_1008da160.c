
undefined8 FUN_1008da160(void)

{
  if (DAT_1011c2a48 != *(FILE **)PTR____stdinp_100ba2330) {
    _fclose(DAT_1011c2a48);
  }
  if (DAT_1011c2a50 != *(FILE **)PTR____stderrp_100ba2328) {
    _fclose(DAT_1011c2a50);
  }
  FUN_10081d010(10,0x1f,"ui_openssl.c",0x249);
  return 1;
}

