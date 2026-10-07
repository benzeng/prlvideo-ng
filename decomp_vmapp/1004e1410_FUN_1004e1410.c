
undefined8 FUN_1004e1410(long param_1,undefined4 *param_2,long param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;
  long local_40;
  long *local_38;
  
  iVar2 = *(int *)(param_3 + 8);
  uVar3 = *(uint *)(param_3 + 0xc);
  FUN_1004e1330(&local_38,param_1,*param_2);
  uVar11 = 0xf0000012;
  if (local_38 != (long *)0x0) {
    uVar11 = 0xf0000022;
    if ((*(byte *)(local_38 + 7) & 0x40) == 0) {
      cVar4 = QFileInfo::isDir();
      uVar11 = 0xf0000010;
      if (cVar4 == '\0') {
        lVar7 = *(long *)(param_2 + 2);
        plVar1 = local_38 + 3;
        iVar8 = 0;
        while (iVar5 = FUN_1002a5b80(param_3,iVar8,&local_40), iVar9 = iVar8, iVar5 != 0) {
          iVar10 = 0;
          do {
            cVar4 = (**(code **)(*plVar1 + 0x88))(plVar1,lVar7);
            uVar11 = 0xf000001c;
            if (cVar4 == '\0') goto LAB_1004e1596;
            if ((uVar3 & 1) == 0) {
              uVar11 = 0xf0000007;
              if (*(char *)(param_1 + 0x30) != '\0') goto LAB_1004e1596;
              lVar6 = QIODevice::write((char *)plVar1,local_40);
              QFileDevice::flush();
            }
            else {
              lVar6 = QIODevice::read((char *)plVar1,local_40);
            }
            uVar11 = 0xf000001c;
            if (lVar6 < 0) goto LAB_1004e1596;
            if (lVar6 == 0) break;
            iVar10 = iVar10 + (int)lVar6;
            local_40 = local_40 + lVar6;
            lVar7 = lVar7 + lVar6;
            iVar5 = iVar5 - (int)lVar6;
          } while (iVar5 != 0);
          if ((iVar10 == 0) || (iVar8 = iVar8 + iVar10, iVar9 = iVar2, iVar8 == iVar2)) break;
        }
        *(int *)(param_3 + 0x10) = iVar9;
        uVar11 = 0;
      }
    }
LAB_1004e1596:
    LOCK();
    plVar1 = local_38 + 1;
    lVar7 = *plVar1;
    *(int *)plVar1 = (int)*plVar1 + -1;
    UNLOCK();
    if ((int)lVar7 == 1) {
      (**(code **)(*local_38 + 0x10))();
    }
  }
  return uVar11;
}

