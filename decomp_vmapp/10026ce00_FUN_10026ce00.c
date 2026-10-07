
void FUN_10026ce00(long param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  long *plVar3;
  
  uVar2 = 1;
  if (param_2 < 0x5d) {
    if (param_2 < 0x2e) {
      if (param_2 < 4) {
        if (param_2 == 0) {
          return;
        }
        if (param_2 == 3) {
          plVar3 = (long *)(param_1 + 0x30);
          if (*(long **)(param_1 + 0x28) != (long *)0x0) {
            plVar3 = *(long **)(param_1 + 0x28);
          }
          iVar1 = (**(code **)(*plVar3 + 0x40))();
          if (iVar1 != 0) {
            return;
          }
        }
        goto LAB_10026ce6a;
      }
      if ((param_2 != 4) && (param_2 != 0x2a)) goto LAB_10026ce6a;
    }
    else if (param_2 != 0x2e) goto LAB_10026ce6a;
  }
  else if ((param_2 != 0x5d) && (param_2 != 0xaa)) goto LAB_10026ce6a;
  uVar2 = 2;
LAB_10026ce6a:
  FUN_10025b2f0(*(undefined8 *)(param_1 + 8),uVar2);
  return;
}

