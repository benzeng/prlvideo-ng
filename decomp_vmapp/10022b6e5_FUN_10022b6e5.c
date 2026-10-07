
void FUN_10022b6e5(long param_1,undefined4 param_2,long param_3)

{
  long lVar1;
  
  lVar1 = *(long *)(param_1 + 0x1a8);
  if (param_3 != 0) {
    if (*(long *)(lVar1 + 0xc0) != 0) {
      (**(code **)(lVar1 + 0xc0))(*(undefined8 *)(lVar1 + 200),param_3,param_2,param_1);
    }
    (*(code *)_xmlFree)(param_3);
  }
  return;
}

