
undefined8 FUN_1002a6e70(long param_1,long param_2,undefined8 param_3)

{
  long *plVar1;
  undefined1 auVar2 [16];
  char cVar3;
  int *piVar4;
  long lVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined8 *puVar8;
  int iVar9;
  undefined8 uVar10;
  
  plVar1 = (long *)(*(long *)(param_1 + 0x8e8) + 0xf0);
  *plVar1 = *plVar1 + 1;
  iVar9 = *(int *)(param_2 + 8);
  if (iVar9 < 0x8100) {
    if (iVar9 < 0x102) {
      if (iVar9 == 0x100) {
LAB_1002a6ed8:
        if (*(ushort *)(param_2 + 0x14) < 0x1c) {
          return 0xf0000003;
        }
        piVar4 = (int *)FUN_1002a6010(param_2);
        if (0x80 < (uint)piVar4[4]) {
          return 0xf0000003;
        }
        if (0x80 < (uint)piVar4[5]) {
          return 0xf0000003;
        }
        if (piVar4[6] < 0) {
          return 0xf0000003;
        }
        lVar5 = FUN_1002a6120(param_2,0,0);
        if (lVar5 == 0) {
          return 0xf0000003;
        }
        if (*(uint *)(lVar5 + 8) < (uint)(piVar4[6] * piVar4[5])) {
          return 0xf0000003;
        }
        if (*(int *)(param_1 + 0x983c) == 0) {
          return 0xf000001c;
        }
        piVar6 = (int *)FUN_1000d77e0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x107f8),piVar4[4]);
        if (piVar6 == (int *)0x0) {
          return 0xf000001c;
        }
        auVar2 = *(undefined1 (*) [16])(piVar4 + 2);
        *piVar6 = auVar2._0_4_ + *piVar4;
        piVar6[1] = auVar2._4_4_ + piVar4[1];
        *(undefined1 (*) [16])(piVar6 + 2) = auVar2;
        if (0 < auVar2._12_4_) {
          FUN_1002a5990(lVar5,0,piVar6 + 6,auVar2._8_4_ << 2);
          if (1 < piVar4[5]) {
            iVar9 = 1;
            do {
              FUN_1002a5990(lVar5,iVar9 * piVar4[6],
                            (int *)((long)piVar4[4] * 4 * (long)iVar9 + (long)(piVar6 + 6)));
              iVar9 = iVar9 + 1;
            } while (iVar9 < piVar4[5]);
          }
        }
        cVar3 = FUN_1000d7810(*(undefined8 *)(*(long *)(param_1 + 8) + 0x107f8));
        if (cVar3 == '\0') {
          return 0xf000001c;
        }
        return 0;
      }
      if (iVar9 != 0x101) goto LAB_1002a70a5;
LAB_1002a7058:
      FUN_1000d78b0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x107f8));
    }
    else if (iVar9 == 0x102) {
LAB_1002a703f:
      FUN_1000d78f0(*(undefined8 *)(*(long *)(param_1 + 8) + 0x107f8));
    }
    else {
      if (iVar9 != 0x110) goto LAB_1002a70a5;
LAB_1002a7071:
      if (*(ushort *)(param_2 + 0x14) < 8) {
        return 0xf0000003;
      }
      puVar7 = (undefined4 *)FUN_1002a6010(param_2);
      *puVar7 = *(undefined4 *)(param_1 + 0x9830);
      puVar7[1] = *(undefined4 *)(param_1 + 0x9834);
    }
    uVar10 = 0;
  }
  else {
    if (iVar9 < 0x8102) {
      if (iVar9 == 0x8100) goto LAB_1002a6ed8;
      if (iVar9 == 0x8101) goto LAB_1002a7058;
    }
    else {
      if (iVar9 == 0x8102) goto LAB_1002a703f;
      if (iVar9 == 0x8110) goto LAB_1002a7071;
    }
LAB_1002a70a5:
    puVar8 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
    uVar10 = 0xf0000004;
    if (puVar8 != (undefined8 *)0x0) {
      *puVar8 = 0;
      puVar8[1] = param_2;
      puVar8[2] = param_3;
      QMutex::lock();
      **(undefined8 **)(param_1 + 0x8e0) = puVar8;
      *(undefined8 **)(param_1 + 0x8e0) = puVar8;
      QWaitCondition::wakeOne();
      QMutex::unlock();
      uVar10 = 0xffffffff;
    }
  }
  return uVar10;
}

