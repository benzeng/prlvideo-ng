
undefined8 FUN_100814970(long param_1,undefined8 param_2)

{
  int iVar1;
  long lVar2;
  undefined8 uVar3;
  
  iVar1 = FUN_10087a520(param_2);
  if (iVar1 == 0) {
    FUN_100887ce0(0x14,0x122,0x26,"ssl_sess.c",0x4f8);
    uVar3 = 0;
  }
  else {
    lVar2 = FUN_10087b530(param_2);
    if (lVar2 == 0) {
      FUN_100887ce0(0x14,0x122,0x14b,"ssl_sess.c",0x4fd);
      FUN_10087a5e0(param_2);
      uVar3 = 0;
    }
    else {
      *(undefined8 *)(param_1 + 0x198) = param_2;
      uVar3 = 1;
    }
  }
  return uVar3;
}

