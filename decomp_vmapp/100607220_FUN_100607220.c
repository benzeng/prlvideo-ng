
void FUN_100607220(undefined4 *param_1)

{
  byte bVar1;
  char *pcVar2;
  
  if (DAT_1011b55f8 < 2) {
    return;
  }
  FUN_1008e3970("","vdisk",2,"hfsp::BTNodeDescriptor {");
  if (DAT_1011b55f8 < 2) {
    return;
  }
  FUN_1008e3970("","vdisk",2,"next node of this kind: %u",*param_1);
  if (DAT_1011b55f8 < 2) {
    return;
  }
  FUN_1008e3970("","vdisk",2,"previous node of this kind: %u",param_1[1]);
  if (DAT_1011b55f8 < 2) {
    return;
  }
  bVar1 = *(byte *)(param_1 + 2);
  if (bVar1 < 2) {
    if (bVar1 == 0) {
      pcVar2 = "Index Node";
      goto LAB_100607313;
    }
    if (bVar1 == 1) {
      pcVar2 = "Head Node";
      goto LAB_100607313;
    }
  }
  else {
    if (bVar1 == 2) {
      pcVar2 = "Map Node";
      goto LAB_100607313;
    }
    if (bVar1 == 0xff) {
      pcVar2 = "Leaf Node";
      goto LAB_100607313;
    }
  }
  pcVar2 = "Unknown node kind";
LAB_100607313:
  FUN_1008e3970("","vdisk",2,"kind: %s (%u)",pcVar2);
  if (((1 < DAT_1011b55f8) &&
      (FUN_1008e3970("","vdisk",2,"height (0 for root): %u",*(undefined1 *)((long)param_1 + 9)),
      1 < DAT_1011b55f8)) &&
     (FUN_1008e3970("","vdisk",2,"number of records in this node: %u",
                    *(undefined2 *)((long)param_1 + 10)), 1 < DAT_1011b55f8)) {
    FUN_1008e3970("","vdisk",2,"} hfsp::BTNodeDescriptor");
    return;
  }
  return;
}

