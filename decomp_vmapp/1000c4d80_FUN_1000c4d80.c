
void FUN_1000c4d80(long param_1,uint param_2)

{
  long lVar1;
  int iVar2;
  long lVar3;
  int iVar4;
  ulong uVar5;
  code *local_38;
  
  uVar5 = (ulong)param_2;
  lVar1 = *(long *)(param_1 + 0x18 + uVar5 * 8);
  if (lVar1 == 0) {
    FUN_1008e3970("","vm",0,"No statistics in the group %s(%u).",(&PTR_s_VMM_100ba8d90)[uVar5],
                  param_2);
    return;
  }
  local_38 = FUN_1000c5a40;
  FUN_1000c5ae0(*(undefined8 *)(lVar1 + 8),lVar1,*(undefined8 *)(lVar1 + 0x10),&local_38);
  FUN_1008e3970("","vm",0,"    %s(%u) group: event=%u, group calls=%u, vcpu calls=%u",
                (&PTR_s_VMM_100ba8d90)[uVar5],param_2,*(undefined4 *)(param_1 + 0x44c),
                *(undefined4 *)(param_1 + 0x438 + uVar5 * 4),*(undefined4 *)(param_1 + 0x448));
  lVar1 = *(long *)(param_1 + 0x18 + uVar5 * 8);
  lVar3 = *(long *)(lVar1 + 8);
  iVar2 = 0;
  if (lVar3 != lVar1) {
    do {
      iVar4 = iVar2;
      FUN_1000c4ce0(param_1,*(undefined8 *)(lVar3 + 0x10),"    ");
      if (0x62 < iVar4) break;
      lVar3 = *(long *)(lVar3 + 8);
      iVar2 = iVar4 + 1;
    } while (lVar3 != *(long *)(param_1 + 0x18 + uVar5 * 8));
    if (0x62 < iVar4) {
      FUN_1008e3970("","vm",0,"        ..........");
    }
  }
  return;
}

