
void FUN_1001cfd27(undefined8 *param_1,long param_2)

{
  long *local_10;
  
  if ((((param_1 != (undefined8 *)0x0) && (param_2 != 0)) && (*(long *)(param_2 + 0x60) != 0)) &&
     (*(long *)(param_2 + 0x70) != 0)) {
    switch(*(undefined4 *)(param_1 + 3)) {
    case 0xd:
      *(undefined4 *)(param_1 + 3) = 6;
      break;
    case 0xe:
      *(undefined4 *)(param_1 + 3) = 5;
      break;
    case 0xf:
      *(undefined4 *)(param_1 + 3) = 5;
      break;
    case 0x10:
      *(undefined4 *)(param_1 + 3) = 5;
      break;
    case 0x11:
      *(undefined4 *)(param_1 + 3) = 5;
      break;
    case 0x12:
      *(undefined4 *)(param_1 + 3) = 5;
      break;
    case 0x13:
      *(undefined4 *)(param_1 + 3) = 5;
      break;
    case 0x14:
      *(undefined4 *)(param_1 + 3) = 8;
      break;
    default:
      _xmlHashRemoveEntry(*(xmlHashTablePtr *)(param_2 + 0x60),(xmlChar *)param_1[4],FUN_1001cf114);
      return;
    case 0x16:
      *(undefined4 *)(param_1 + 3) = 1;
    }
    _xmlHashRemoveEntry(*(xmlHashTablePtr *)(param_2 + 0x60),(xmlChar *)param_1[4],
                        (xmlHashDeallocator)0x0);
    param_1[1] = *(undefined8 *)(param_2 + 0x70);
    *param_1 = 0;
    if (*(long *)(*(long *)(param_2 + 0x70) + 0x10) == 0) {
      *(undefined8 **)(*(long *)(param_2 + 0x70) + 0x10) = param_1;
    }
    else {
      for (local_10 = *(long **)(*(long *)(param_2 + 0x70) + 0x10); *local_10 != 0;
          local_10 = (long *)*local_10) {
      }
      *local_10 = (long)param_1;
    }
  }
  return;
}

