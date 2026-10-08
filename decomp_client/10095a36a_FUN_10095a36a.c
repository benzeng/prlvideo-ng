
undefined4 FUN_10095a36a(long param_1)

{
  undefined4 local_14;
  
  if (*(int *)(param_1 + 0x18) == 2) {
    local_14 = 0;
  }
  else {
    do {
      if (*(long *)(param_1 + 0x70) == 0) {
        if (*(long *)(*(long *)(param_1 + 8) + 0x18) == 0) {
          *(undefined4 *)(param_1 + 0x18) = 2;
          return 0;
        }
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(long *)(param_1 + 8) + 0x18);
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
      else if ((((*(int *)(param_1 + 0x18) == 4) || (*(int *)(*(long *)(param_1 + 0x70) + 8) == 0xe)
                ) || (*(int *)(*(long *)(param_1 + 0x70) + 8) == 0x13)) ||
              (*(int *)(*(long *)(param_1 + 0x70) + 8) == 5)) {
LAB_10095a493:
        if (*(long *)(*(long *)(param_1 + 0x70) + 0x30) == 0) {
          if (*(long *)(*(long *)(param_1 + 0x70) + 0x28) == 0) {
            *(undefined4 *)(param_1 + 0x18) = 2;
          }
          else {
            if ((*(int *)(*(long *)(*(long *)(param_1 + 0x70) + 0x28) + 8) == 9) ||
               (*(int *)(*(long *)(*(long *)(param_1 + 0x70) + 0x28) + 8) == 0xd)) {
              *(undefined4 *)(param_1 + 0x18) = 2;
              return 0;
            }
            *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x28);
            *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + -1;
            *(undefined4 *)(param_1 + 0x18) = 4;
          }
        }
        else {
          *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x30);
          *(undefined4 *)(param_1 + 0x18) = 0;
        }
      }
      else if (*(long *)(*(long *)(param_1 + 0x70) + 0x18) == 0) {
        if (*(int *)(*(long *)(param_1 + 0x70) + 8) != 2) goto LAB_10095a493;
        *(undefined4 *)(param_1 + 0x18) = 4;
      }
      else {
        *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(*(long *)(param_1 + 0x70) + 0x18);
        *(int *)(param_1 + 0x80) = *(int *)(param_1 + 0x80) + 1;
        *(undefined4 *)(param_1 + 0x18) = 0;
      }
    } while ((*(int *)(*(long *)(param_1 + 0x70) + 8) == 0x13) ||
            (*(int *)(*(long *)(param_1 + 0x70) + 8) == 0x14));
    local_14 = 1;
  }
  return local_14;
}

