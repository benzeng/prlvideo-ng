
undefined8 FUN_100c88bf0(undefined8 param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined1 local_58 [60];
  int local_1c;
  
  if (param_2 == 0) {
    puVar2 = (undefined1 *)0x0;
  }
  else {
    puVar2 = local_58;
    FUN_100c9d9e0(puVar2);
  }
  local_1c = 0;
  uVar1 = FUN_100c88cc0(param_1,puVar2,0,&local_1c);
  if (local_1c != 0) {
    FUN_100c62ee0(0xd,0xb2,local_1c,"asn1_gen.c",0x90);
  }
  return uVar1;
}

