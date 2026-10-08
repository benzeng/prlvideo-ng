
undefined8 FUN_100c57710(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  if ((*(code **)(param_1 + 0x50) == (code *)0x0) ||
     (iVar1 = (**(code **)(param_1 + 0x50))(param_1,&local_10,0,param_2), iVar1 == 0)) {
    FUN_100c62ee0(0x26,0xba,0x93,"tb_digest.c",0x7e);
    local_10 = 0;
  }
  return local_10;
}

