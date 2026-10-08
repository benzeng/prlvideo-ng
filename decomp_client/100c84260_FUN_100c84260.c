
void FUN_100c84260(undefined8 param_1,undefined8 param_2,undefined8 param_3,long param_4,
                  undefined *param_5)

{
  undefined *puVar1;
  undefined8 uVar2;
  undefined8 local_10;
  
  puVar1 = &DAT_102309600;
  if (param_5 != (undefined *)0x0) {
    puVar1 = param_5;
  }
  uVar2 = 0;
  if ((puVar1[1] & 1) == 0) {
    uVar2 = *(undefined8 *)(param_4 + 0x30);
  }
  local_10 = param_2;
  FUN_100c842b0(param_1,&local_10,param_3,param_4,0,uVar2,0,puVar1);
  return;
}

