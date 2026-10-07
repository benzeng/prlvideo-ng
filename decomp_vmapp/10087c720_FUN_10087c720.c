
undefined8 FUN_10087c720(long param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 local_10;
  
  if ((*(code **)(param_1 + 0x58) == (code *)0x0) ||
     (iVar1 = (**(code **)(param_1 + 0x58))(param_1,&local_10,0,param_2), iVar1 == 0)) {
    FUN_100887ce0(0x26,0xc0,0x65,"tb_pkmeth.c",0x80);
    local_10 = 0;
  }
  return local_10;
}

