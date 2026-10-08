
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_1000c5f40(long param_1,long param_2)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  QMapNodeBase *pQVar7;
  ulong *puVar8;
  QMapNodeBase *pQVar9;
  undefined1 auVar10 [16];
  undefined1 local_58 [16];
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  undefined1 local_31;
  
  local_48 = _DAT_100e14060 + *(int *)(param_2 + 0x10);
  iStack_44 = _UNK_100e14064 + *(int *)(param_2 + 0x14);
  iStack_40 = _UNK_100e14068 + *(int *)(param_2 + 0x18);
  iStack_3c = _UNK_100e1406c + *(int *)(param_2 + 0x1c);
  if ((*(int *)(param_2 + 0x10) < iStack_40) && (*(int *)(param_2 + 0x14) < iStack_3c)) {
    uVar3 = FUN_100152280();
    lVar4 = FUN_1001548f0(uVar3,param_1 + 0x10);
    if (lVar4 != 0) {
      uVar3 = FUN_10018c280(lVar4);
      lVar5 = FUN_100319960(uVar3);
      if ((lVar5 != 0) && (iVar2 = FUN_100325aa0(lVar5), iVar2 == 2)) {
        uVar3 = FUN_10018c280(lVar4);
        plVar6 = (long *)FUN_100319950(uVar3);
        pQVar7 = (QMapNodeBase *)*plVar6;
        if (*(int *)pQVar7 == 0) {
          pQVar7 = (QMapNodeBase *)QMapDataBase::createData();
          if (*(long *)(*plVar6 + 0x10) != 0) {
            puVar8 = (ulong *)FUN_1000340b0(*(long *)(*plVar6 + 0x10),pQVar7);
            *(ulong **)(pQVar7 + 0x10) = puVar8;
            *puVar8 = *puVar8 & 3 | (ulong)(pQVar7 + 8);
            QMapDataBase::recalcMostLeftNode();
          }
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + 1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          pQVar7 = (QMapNodeBase *)*plVar6;
        }
        auVar10._8_8_ = local_58._8_8_;
        auVar10._0_8_ = local_58._0_8_;
        if (*(long *)(pQVar7 + 0x10) != 0) {
          pQVar9 = *(QMapNodeBase **)(pQVar7 + 0x20);
          local_58 = auVar10;
          while (pQVar9 != pQVar7 + 8) {
            if (((*(long *)(pQVar9 + 0x20) != 0) && (*(int *)(*(long *)(pQVar9 + 0x20) + 4) != 0))
               && (lVar4 = *(long *)(pQVar9 + 0x28), lVar4 != 0)) {
              auVar10 = FUN_100325fd0(lVar4);
              local_58 = auVar10;
              if ((auVar10._0_4_ <= auVar10._8_4_) && (auVar10._4_4_ <= auVar10._12_4_)) {
                cVar1 = QRect::intersects((QRect *)local_58);
                if (cVar1 != '\0') {
                  cVar1 = FUN_100326140(lVar4);
                  if (cVar1 == '\0') {
                    FUN_100325fe0(lVar4);
                  }
                }
              }
            }
            pQVar9 = (QMapNodeBase *)QMapNodeBase::nextNode();
          }
        }
        if (*(int *)pQVar7 != -1) {
          if (*(int *)pQVar7 != 0) {
            LOCK();
            *(int *)pQVar7 = *(int *)pQVar7 + -1;
            local_31 = *(int *)pQVar7 != 0;
            UNLOCK();
            if ((bool)local_31) {
              return;
            }
          }
          if (*(long *)(pQVar7 + 0x10) != 0) {
            FUN_100034170();
            QMapDataBase::freeTree(pQVar7,(int)*(undefined8 *)(pQVar7 + 0x10));
          }
          QMapDataBase::freeData((QMapDataBase *)pQVar7);
        }
      }
    }
  }
  return;
}

