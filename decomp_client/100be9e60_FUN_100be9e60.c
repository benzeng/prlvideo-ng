
void FUN_100be9e60(long param_1,undefined8 param_2)

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
    FUN_100bf2780(9,0xc,"ssl_sess.c",0x475);
    uVar2 = *(undefined8 *)(lVar1 + 0x30);
    *(undefined8 *)(lVar1 + 0x30) = 0;
    FUN_100c61110(lVar1,FUN_100be9ef0,&local_38);
    *(undefined8 *)(local_28 + 0x30) = uVar2;
    FUN_100bf2780(10,0xc,"ssl_sess.c",0x47b);
  }
  return;
}

