
int FUN_1000af6b0(long param_1,undefined8 param_2)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  long lVar4;
  ulong uVar5;
  char *pcVar6;
  ulong uVar7;
  
  if (*(int *)(param_1 + 0xafc) == 0) {
    pcVar6 = "Memory hotplug is not enabled";
  }
  else {
    if (*(long *)(param_1 + 0x1940) == 0) {
      return -0x7ffffff7;
    }
    lVar4 = FUN_10008d1c0();
    if (lVar4 != *(long *)(*(long *)(*(long *)(param_1 + 0x1940) + 0x60) + 0x10)) {
      uVar2 = CVmMemory::getRamSize();
      uVar7 = (ulong)uVar2 * 0x100000 + 0x1fffff & 0x1fffffffe00000;
      if (uVar7 <= *(ulong *)(*(long *)(*(long *)(param_1 + 0x1940) + 0x60) + 0x10)) {
        return -0x7ffffffd;
      }
      uVar5 = FUN_10008d1c0();
      if (uVar5 < uVar7) {
        return -0x7ffffffd;
      }
      if (((*(int *)(param_1 + 0xafc) != 0) && (*(long *)(param_1 + 0x1940) != 0)) &&
         (cVar1 = FUN_10008d050(*(long *)(param_1 + 0x1940),uVar7), cVar1 != '\0')) {
        *(uint *)(param_1 + 0x5ac) = uVar2;
        iVar3 = (**(code **)(**(long **)(param_1 + 0x1950) + 0x90))
                          (*(long **)(param_1 + 0x1950),param_2,1);
        if (-1 < iVar3) {
          FUN_1002a4880((ulong)uVar2);
          return 0;
        }
        FUN_1008e3970("","vm",0,"VMSetMemSize: SetPmmQuota failure! status=0x%x",iVar3);
        return iVar3;
      }
      FUN_1008e3970("","vm",0,"Failed to changed guest swap");
      return -0x7fffffea;
    }
    pcVar6 = "Cannot extend swap file";
  }
  FUN_1008e3970("","vm",0,pcVar6);
  return -0x7ffffd6f;
}

