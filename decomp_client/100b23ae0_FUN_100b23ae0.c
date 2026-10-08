
undefined1 FUN_100b23ae0(long *param_1)

{
  long lVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  char cVar6;
  int iVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  long lVar11;
  undefined4 uVar12;
  long lVar13;
  ulong uVar14;
  ulong uVar15;
  undefined1 uVar16;
  ulong in_stack_ffffffffffffff88;
  char *in_stack_ffffffffffffff90;
  undefined4 uVar17;
  
  lVar1 = param_1[0x114];
  lVar2 = param_1[0x113];
  lVar3 = *param_1;
  lVar11 = lVar2;
  if (*(int *)(*(long *)(lVar3 + 0x20) + 8) != 4) {
    in_stack_ffffffffffffff90 = "ConsistencyCheckCb";
    in_stack_ffffffffffffff88 = CONCAT44((int)(in_stack_ffffffffffffff88 >> 0x20),0x6a3);
    FUN_100df99c0("Compact","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "sizeof(PRL_UINT32) == image->m_Info->GetElementSizeBytes()","StructuredBase.cpp",
                  in_stack_ffffffffffffff88,"ConsistencyCheckCb");
    lVar11 = param_1[0x113];
  }
  lVar13 = param_1[0x110];
  uVar10 = *(uint *)(param_1 + 0x111);
  if (lVar11 == 0) {
    lVar13 = lVar13 + (ulong)*(uint *)((long)param_1 + 0x8ac);
    uVar10 = uVar10 - *(uint *)((long)param_1 + 0x8ac);
  }
  if (3 < DAT_10230ffd0) {
    in_stack_ffffffffffffff88 = param_1[0x114];
    in_stack_ffffffffffffff90 =
         (char *)CONCAT44((int)((ulong)in_stack_ffffffffffffff90 >> 0x20),
                          *(undefined4 *)(lVar3 + 0x48));
    FUN_100df99c0("Compact","dimg",4,"[%p] Check range [%llu, %llu[, used %u",lVar3,lVar11,
                  in_stack_ffffffffffffff88,in_stack_ffffffffffffff90);
  }
  if ((uVar10 & 3) != 0) {
    in_stack_ffffffffffffff90 = "CBatChunk";
    in_stack_ffffffffffffff88 = CONCAT44((int)(in_stack_ffffffffffffff88 >> 0x20),0x5e);
    FUN_100df99c0("","dimg",0,"ASSERT( %s ) occured in %s:%d [%s]",
                  "0 == (m_SizeBytes % m_SizeOfEntry)","StructuredBase.cpp",
                  in_stack_ffffffffffffff88,"CBatChunk");
  }
  uVar12 = (undefined4)(in_stack_ffffffffffffff88 >> 0x20);
  uVar17 = (undefined4)((ulong)in_stack_ffffffffffffff90 >> 0x20);
  if ((int)(lVar1 - lVar2) != 0) {
    uVar15 = 0;
    do {
      uVar10 = *(uint *)(lVar13 + uVar15 * 4);
      uVar14 = in_stack_ffffffffffffff88;
      if ((ulong)uVar10 != 0) {
        lVar11 = lVar2 + uVar15;
        lVar4 = *(long *)(lVar3 + 0x20);
        uVar14 = (ulong)*(uint *)(lVar4 + 0xc) * (ulong)uVar10;
        uVar9 = uVar14 - *(ulong *)(lVar4 + 0x20) /
                         *(ulong *)(*(long *)(**(long **)(lVar4 + 0x38) + -0x18) + 0x38 +
                                   (long)*(long **)(lVar4 + 0x38));
        uVar8 = uVar9 / *(uint *)(param_1 + 0x116);
        uVar12 = (undefined4)uVar8;
        uVar17 = (undefined4)((ulong)in_stack_ffffffffffffff90 >> 0x20);
        if (uVar9 % (ulong)*(uint *)(param_1 + 0x116) == 0) {
          if (uVar14 < *(uint *)(param_1 + 0x115) || uVar14 - *(uint *)(param_1 + 0x115) == 0) {
            iVar7 = FUN_100ddc970(*(undefined8 *)(lVar3 + 0x40),uVar8 & 0xffffffff);
            if (iVar7 < 0) {
              *(undefined4 *)(lVar3 + 0x4c) = 0xffffffff;
              plVar5 = *(long **)(lVar3 + 0x38);
              (**(code **)(*(long *)((long)plVar5 + *(long *)(*plVar5 + -0x18)) + 0x1a0))
                        ((long)plVar5 + *(long *)(*plVar5 + -0x18));
            }
            else if (iVar7 != 0) {
              in_stack_ffffffffffffff90 =
                   (char *)CONCAT44((int)((ulong)in_stack_ffffffffffffff90 >> 0x20),uVar10);
              FUN_100df99c0("Compact","dimg",0,
                            "[%p] BAT[%u] offset = 0x%llX (0x%X), idx = %u [DUPLICATED]",lVar3,
                            lVar11,uVar14,in_stack_ffffffffffffff90,uVar12);
              *(int *)(lVar3 + 0x58) = *(int *)(lVar3 + 0x58) + 1;
              goto LAB_100b23d84;
            }
            uVar14 = in_stack_ffffffffffffff88;
            cVar6 = FUN_100b249e0(lVar3 + 0x38,uVar8 & 0xffffffff);
            if (cVar6 == '\0') {
              FUN_100df99c0("Compact","dimg",0,"[%p] m_UsedBlocks error",lVar3);
              goto LAB_100b23e7d;
            }
          }
          else {
            in_stack_ffffffffffffff90 = (char *)CONCAT44(uVar17,uVar12);
            FUN_100df99c0("Compact","dimg",0,"[%p] BAT[%u] offset = 0x%llX, idx = %u [OUT OF IMAGE]"
                          ,lVar3,lVar11,uVar14,in_stack_ffffffffffffff90);
            *(int *)(lVar3 + 0x54) = *(int *)(lVar3 + 0x54) + 1;
          }
        }
        else {
          in_stack_ffffffffffffff90 = (char *)CONCAT44(uVar17,uVar12);
          FUN_100df99c0("Compact","dimg",0,"[%p] BAT[%u] offset = 0x%llX, idx = %u [NOT ALIGNED]",
                        lVar3,lVar11,uVar14,in_stack_ffffffffffffff90);
          *(int *)(lVar3 + 0x50) = *(int *)(lVar3 + 0x50) + 1;
        }
      }
LAB_100b23d84:
      uVar12 = (undefined4)(uVar14 >> 0x20);
      uVar17 = (undefined4)((ulong)in_stack_ffffffffffffff90 >> 0x20);
      uVar15 = uVar15 + 1;
      in_stack_ffffffffffffff88 = uVar14;
    } while (uVar15 < (lVar1 - lVar2 & 0xffffffffU));
  }
  uVar16 = 1;
  if ((param_1[0x114] == param_1[0x112]) &&
     (((*(int *)(lVar3 + 0x50) != 0 || (*(int *)(lVar3 + 0x54) != 0)) ||
      (*(int *)(lVar3 + 0x58) != 0)))) {
    FUN_100df99c0("Compact","dimg",0,"[%p] BAT consistency check failed:",lVar3);
    FUN_100df99c0("Compact","dimg",0,"[%p] NotAligned = %u, OutOfDisk = %u, Duplicated = %u",lVar3,
                  *(undefined4 *)(lVar3 + 0x50),CONCAT44(uVar12,*(undefined4 *)(lVar3 + 0x54)),
                  CONCAT44(uVar17,*(undefined4 *)(lVar3 + 0x58)));
LAB_100b23e7d:
    uVar16 = 0;
    *(undefined4 *)(lVar3 + 0x4c) = 0xffffffff;
    plVar5 = *(long **)(lVar3 + 0x38);
    (**(code **)(*(long *)((long)plVar5 + *(long *)(*plVar5 + -0x18)) + 0x1a0))
              ((long)plVar5 + *(long *)(*plVar5 + -0x18));
  }
  return uVar16;
}

