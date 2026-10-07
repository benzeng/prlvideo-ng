
void FUN_1008146f0(long param_1,undefined8 param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_38;
  undefined8 local_30;
  long local_28;
  
  lVar1 = *(long *)(param_1 + 0x20);
  if (lVar1 != 0) {
    local_38 = param_1;
    local_30 = param_2;
    local_28 = lVar1;
    FUN_10081d010(9,0xc,"ssl_sess.c",0x475);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    FUN_100885f10(lVar1,FUN_100814780,&local_38);
    *(undefined8 *)(local_28 + 0x30) = uVar2;
    FUN_10081d010(10,0xc,"ssl_sess.c",0x47b);
  }
  return;
}

