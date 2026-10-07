
void FUN_100208139(int *param_1,long param_2)

{
  long lVar1;
  undefined8 uVar2;
  long local_28;
  long local_20;
  
  if ((*param_1 == 0x18) && (*(long *)(*(long *)(param_1 + 0x12) + 0x18) != 0)) {
    lVar1 = *(long *)(param_1 + 0x12);
    uVar2 = FUN_1001ed5e8(*(undefined8 *)(param_2 + 0x40),
                          *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x18),
                          *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x20));
    *(undefined8 *)(lVar1 + 8) = uVar2;
    if (*(long *)(*(long *)(param_1 + 0x12) + 8) == 0) {
      FUN_1001e9f77(param_2,0xbbc,param_1,*(undefined8 *)(param_1 + 6),"refer",
                    *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x18),
                    *(undefined8 *)(*(long *)(param_1 + 0x12) + 0x20),0x17,0);
    }
    else if (param_1[0x10] != *(int *)(*(long *)(*(long *)(param_1 + 0x12) + 8) + 0x40)) {
      local_28 = 0;
      local_20 = *(long *)(*(long *)(param_1 + 0x12) + 8);
      uVar2 = FUN_1001e6d76(&local_28,*(undefined8 *)(local_20 + 0x28),
                            *(undefined8 *)(local_20 + 0x20));
      FUN_1001ea46a(param_2,0xc08,0,param_1,*(undefined8 *)(param_1 + 6),
                    "The cardinality of the keyref differs from the cardinality of the referenced key \'%s\'"
                    ,uVar2);
      if (local_28 != 0) {
        (*(code *)_xmlFree)(local_28);
      }
    }
  }
  return;
}

