
undefined8 FUN_100c57500(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  if ((*(code **)(param_1 + 0x48) == (code *)0x0) ||
     (iVar1 = (**(code **)(param_1 + 0x48))(param_1,&local_10,0,param_2), iVar1 == 0)) {
    FUN_100c62ee0(0x26,0xb9,0x92,"tb_cipher.c",0x7e);
    local_10 = 0;
  }
  return local_10;
}

