
long FUN_100c74a40(undefined8 param_1,undefined8 *param_2,undefined8 param_3)

{
  ulong uVar1;
  long lVar2;
  long lVar3;
  undefined8 uVar4;
  undefined1 local_30 [4];
  int local_2c;
  undefined8 local_28;
  undefined8 local_20;
  
  local_20 = *param_2;
  uVar1 = FUN_100c8abb0(&local_20,&local_28,&local_2c,local_30,param_3);
  uVar4 = 0x66;
  if (((uVar1 & 0x80) == 0) && (uVar4 = 0x74, local_2c == 6)) {
    lVar2 = FUN_100c74ae0(param_1,&local_20,local_28);
    lVar3 = 0;
    if (lVar2 != 0) {
      *param_2 = local_20;
      lVar3 = lVar2;
    }
  }
  else {
    FUN_100c62ee0(0xd,0x93,uVar4,"a_object.c",0x108);
    lVar3 = 0;
  }
  return lVar3;
}

