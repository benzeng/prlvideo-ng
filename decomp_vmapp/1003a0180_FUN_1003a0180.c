
undefined4 FUN_1003a0180(long param_1,ulong param_2)

{
  uint uVar1;
  long *plVar2;
  uint *puVar3;
  int iVar4;
  undefined4 uVar5;
  char *pcVar6;
  char *pcVar7;
  
  *(int *)(param_1 + 0x18) = (int)param_2;
  iVar4 = (int)((param_2 & 0xffffffff) >> 0x10);
  pcVar6 = "ver?";
  if (iVar4 == 0xfffe) {
    pcVar6 = "vs";
  }
  pcVar7 = "ps";
  if (iVar4 != 0xffff) {
    pcVar7 = pcVar6;
  }
  if (*(long *)(param_1 + 0x20) != 0) {
    FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),"// ",pcVar6);
  }
  uVar5 = 0;
  FUN_10038e8e0(*(undefined8 *)(param_1 + 0x10),"%s_%d_%d\n",pcVar7,
                (param_2 & 0xffffffff) >> 8 & 0xff,param_2 & 0xff);
  plVar2 = *(long **)(param_1 + 0x20);
  if (plVar2 != (long *)0x0) {
    puVar3 = *(uint **)(param_1 + 0x10);
    uVar1 = *puVar3;
    uVar5 = (**(code **)(*plVar2 + 0x18))(plVar2,(int)param_2);
    if (uVar1 < *puVar3) {
      FUN_10038e8e0(puVar3,"\n");
    }
  }
  return uVar5;
}

