
void FUN_100213298(long param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                  undefined4 param_5,undefined8 param_6,xmlEnumerationPtr param_7)

{
  if (((param_1 == 0) || (*(long *)(param_1 + 0x10) == 0)) ||
     (*(long *)(*(long *)(param_1 + 0x10) + 0x40) == 0)) {
    _xmlFreeEnumeration(param_7);
  }
  else {
    (**(code **)(*(long *)(param_1 + 0x10) + 0x40))
              (*(undefined8 *)(param_1 + 0x20),param_2,param_3,param_4,param_5,param_6,param_7);
  }
  return;
}

