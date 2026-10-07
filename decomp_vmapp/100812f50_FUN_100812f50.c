
long FUN_100812f50(void)

{
  long lVar1;
  time_t tVar2;
  
  lVar1 = FUN_10081ddd0(0x160,"ssl_sess.c",0xc4);
  if (lVar1 == 0) {
    FUN_100887ce0(0x14,0xbd,0x41,"ssl_sess.c",0xc6);
    lVar1 = 0;
  }
  else {
    ___bzero(lVar1,0x160);
    *(undefined8 *)(lVar1 + 0xb8) = 1;
    *(undefined4 *)(lVar1 + 0xc0) = 1;
    *(undefined8 *)(lVar1 + 200) = 0x130;
    tVar2 = _time((time_t *)0x0);
    *(time_t *)(lVar1 + 0xd0) = tVar2;
    *(undefined4 *)(lVar1 + 0xd8) = 0;
    *(undefined8 *)(lVar1 + 0x138) = 0;
    *(undefined8 *)(lVar1 + 0x130) = 0;
    *(undefined8 *)(lVar1 + 0x128) = 0;
    *(undefined8 *)(lVar1 + 0x120) = 0;
    *(undefined8 *)(lVar1 + 0x118) = 0;
    *(undefined8 *)(lVar1 + 0x110) = 0;
    *(undefined8 *)(lVar1 + 0x108) = 0;
    FUN_10081f930(3,lVar1,lVar1 + 0xf8);
    *(undefined8 *)(lVar1 + 0x158) = 0;
    *(undefined8 *)(lVar1 + 0x98) = 0;
    *(undefined8 *)(lVar1 + 0x90) = 0;
  }
  return lVar1;
}

