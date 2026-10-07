
long FUN_100557890(long param_1,long param_2,undefined8 *param_3,ulong param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  code *pcVar4;
  long lVar5;
  ulong uVar6;
  char cVar7;
  long lVar8;
  char *pcVar9;
  long lVar10;
  undefined4 *puVar11;
  long lVar12;
  
  lVar8 = *(long *)(param_1 + 0x10);
  if (lVar8 != 0) {
    do {
      pcVar4 = *(code **)(*(long *)(param_1 + 0x18) + 0x10);
      if (pcVar4 == (code *)0x0) {
LAB_100557940:
        pcVar9 = "Failed to get next block: cancelled";
        goto LAB_100557955;
      }
      uVar1 = *(uint *)(lVar8 + 8);
      uVar6 = (ulong)(uint)(*(int *)(param_1 + 0x80) * 100);
      cVar7 = (*pcVar4)(*(undefined8 *)(*(long *)(param_1 + 0x18) + 0x18),uVar6 / uVar1,
                        uVar6 % (ulong)uVar1);
      if (cVar7 == '\0') goto LAB_100557940;
      lVar8 = (long)*(int *)(param_1 + 0x8c);
      if (-1 < lVar8) {
        lVar5 = *(long *)(param_1 + 0x60);
        lVar12 = lVar8 * 0x10;
        iVar2 = *(int *)(lVar5 + 4 + lVar12);
        if ((long)iVar2 < 0) {
          puVar11 = (undefined4 *)0x0;
          if (iVar2 == -1) {
            puVar11 = (undefined4 *)(param_1 + 0x88);
          }
        }
        else {
          puVar11 = (undefined4 *)((long)iVar2 * 0x10 + lVar5);
        }
        *puVar11 = *(undefined4 *)(lVar5 + lVar12);
        iVar3 = *(int *)(lVar5 + lVar12);
        if ((long)iVar3 < 0) {
          lVar10 = 0;
          if (iVar3 == -1) {
            lVar10 = param_1 + 0x88;
          }
        }
        else {
          lVar10 = lVar5 + (long)iVar3 * 0x10;
        }
        *(int *)(lVar10 + 4) = iVar2;
        *(int *)(lVar5 + lVar12) = -2;
        *(undefined4 *)(lVar5 + 4 + lVar12) = 0xfffffffe;
        return lVar8;
      }
      if (uVar1 <= *(uint *)(param_1 + 0x80)) {
        FUN_1008e3970("","TransMem",0,"Failed to get next block: all done");
LAB_1005579a7:
        *param_3 = 0xffffffffffffffff;
        return 0xfffffffd;
      }
      if (*(int *)(param_2 + 0x14) != 0) goto LAB_1005579a7;
      QWaitCondition::wait((QMutex *)(param_1 + 0x58),param_4);
      lVar8 = *(long *)(param_1 + 0x10);
    } while (lVar8 != 0);
  }
  pcVar9 = "Failed to get next block: the engine is stopped";
LAB_100557955:
  FUN_1008e3970("","TransMem",0,pcVar9);
  return 0xfffffffd;
}

