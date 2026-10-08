
void FUN_100ac3c20(long param_1)

{
  undefined4 uVar1;
  long lVar2;
  code *pcVar3;
  char cVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  Data *pDVar8;
  QArrayData *local_78;
  Data *local_70;
  int local_68;
  int local_64;
  int local_60;
  int local_5c;
  double local_58;
  double local_50;
  double local_48;
  double local_40;
  undefined1 local_31;
  
  FUN_100adc1f0(&local_70,param_1 + 0x100);
  if (*(int *)(local_70 + 8) != *(int *)(local_70 + 0xc)) {
    pDVar8 = local_70 + (long)*(int *)(local_70 + 8) * 8 + 0x10;
    do {
      lVar2 = *(long *)pDVar8;
      if ((*(uint *)(lVar2 + 0x18) & 0x4049) == 0x4008) {
        uVar1 = *(undefined4 *)(lVar2 + 0x48);
        cVar4 = FUN_100d7c0a0();
        pcVar3 = DAT_102311b38;
        if (cVar4 == '\0') {
LAB_100ac3cb8:
          local_78 = (QArrayData *)PTR_shared_null_1021e1288;
        }
        else {
          uVar5 = (*DAT_1023119d8)();
          iVar6 = (*pcVar3)(uVar5,uVar1,&local_58);
          if (iVar6 != 0) goto LAB_100ac3cb8;
          local_68 = (int)local_58;
          local_64 = (int)local_50;
          local_60 = local_68 + -1 + (int)local_48;
          local_5c = local_64 + -1 + (int)local_40;
          FUN_100d7bed0(&local_78,&local_68);
        }
        iVar6 = FUN_100d7b000(&local_78);
        if ((0 < iVar6) &&
           ((iVar7 = FUN_100d7ae30(iVar6), iVar7 != 1 ||
            (cVar4 = FUN_100ac3e30(param_1,&local_78), cVar4 != '\0')))) {
          FUN_100d7b590(*(undefined4 *)(lVar2 + 0x48),iVar6);
        }
        if (*(int *)local_78 != -1) {
          if (*(int *)local_78 != 0) {
            LOCK();
            *(int *)local_78 = *(int *)local_78 + -1;
            local_31 = *(int *)local_78 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100ac3d70;
          }
          QArrayData::deallocate(local_78,2,8);
        }
      }
LAB_100ac3d70:
      pDVar8 = pDVar8 + 8;
    } while (pDVar8 != local_70 + (long)*(int *)(local_70 + 0xc) * 8 + 0x10);
  }
  if (*(int *)local_70 != -1) {
    if (*(int *)local_70 != 0) {
      LOCK();
      *(int *)local_70 = *(int *)local_70 + -1;
      UNLOCK();
      if (*(int *)local_70 != 0) {
        return;
      }
      local_31 = 0;
    }
    QListData::dispose(local_70);
  }
  return;
}

