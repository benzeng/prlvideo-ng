
void FUN_10003e870(undefined8 param_1,long param_2)

{
  uint uVar1;
  Data *pDVar2;
  ulong uVar3;
  undefined8 uVar4;
  char *pcVar5;
  Data *pDVar6;
  QArrayData *pQVar7;
  char *pcVar8;
  char *pcVar9;
  int iVar10;
  long lVar11;
  QArrayData *local_68;
  QArrayData *local_60;
  Data *local_58;
  string local_50 [31];
  undefined1 local_31;
  
  uVar1 = *(uint *)(param_2 + 0x10);
  if (*(int *)(param_2 + 0x18) != 3) {
    uVar4 = ___cxa_allocate_exception(0x60);
    FUN_100516ad0(uVar4,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x1e0,
                  "bit_box type WMA_Command::bbt_utf8string expected",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
    ___cxa_throw(uVar4,&PTR_vtable_100bc4810,FUN_100516cd0);
  }
  pcVar5 = (char *)(param_2 + 0x20);
  _strlen(pcVar5);
  std::string::__init((char *)local_50,(ulong)pcVar5);
  local_58 = (Data *)PTR_shared_null_100ba2188;
  pcVar8 = (char *)(param_2 + 0x14 + (ulong)uVar1);
  uVar3 = (ulong)*(uint *)(param_2 + 0x1c);
  pcVar9 = pcVar5 + uVar3;
  if (pcVar9 != pcVar8) {
    iVar10 = -1;
    do {
      if (*(int *)(pcVar5 + uVar3 + 4) != 3) {
        uVar4 = ___cxa_allocate_exception(0x60);
        FUN_100516ad0(uVar4,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x1e9,
                      "bit_box type WMA_Command::bbt_utf8string expected",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
        ___cxa_throw(uVar4,&PTR_vtable_100bc4810,FUN_100516cd0);
      }
      _strlen(pcVar5 + uVar3 + 0xc);
      QString::fromUtf8_helper((char *)&local_68,(int)(pcVar5 + uVar3 + 0xc));
      QString::normalized(&local_60,&local_68,1,0);
      if (*(int *)local_68 != -1) {
        if (*(int *)local_68 != 0) {
          LOCK();
          *(int *)local_68 = *(int *)local_68 + -1;
          local_31 = *(int *)local_68 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10003e949;
        }
        QArrayData::deallocate(local_68,2,8);
      }
LAB_10003e949:
      FUN_10000c490(&local_58,&local_60);
      if (*(int *)local_60 != -1) {
        if (*(int *)local_60 != 0) {
          LOCK();
          *(int *)local_60 = *(int *)local_60 + -1;
          local_31 = *(int *)local_60 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10003e985;
        }
        QArrayData::deallocate(local_60,2,8);
      }
LAB_10003e985:
      uVar3 = (ulong)*(uint *)(pcVar9 + 8);
      pcVar5 = pcVar9 + 0xc;
      pcVar9 = pcVar9 + uVar3 + 0xc;
      iVar10 = iVar10 + 1;
    } while (pcVar9 != pcVar8);
    if ((-1 < iVar10) && (*(int *)(local_58 + 0xc) <= *(int *)(local_58 + 8))) {
      uVar4 = ___cxa_allocate_exception(0x60);
      FUN_100516ad0(uVar4,"../Tools/SharedHostApplications/Host/WinMicroApp.cpp",0x1f7,
                    "nothing to open",DAT_100b463c0);
                    /* WARNING: Subroutine does not return */
      ___cxa_throw(uVar4,&PTR_vtable_100bc4810,FUN_100516cd0);
    }
  }
  FUN_10003f350();
  pDVar2 = local_58;
  *(undefined4 *)(param_2 + 8) = 0;
  if (param_2 != 0) {
    *(byte *)(param_2 + 0xf) = *(byte *)(param_2 + 0xf) | 0x40;
    *(undefined4 *)(param_2 + 0x10) = 0;
  }
  if (*(int *)local_58 != -1) {
    if (*(int *)local_58 != 0) {
      LOCK();
      *(int *)local_58 = *(int *)local_58 + -1;
      local_31 = *(int *)local_58 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_10003ea71;
    }
    iVar10 = *(int *)(local_58 + 0xc);
    if (iVar10 != *(int *)(local_58 + 8)) {
      lVar11 = (long)*(int *)(local_58 + 8) * 8 + (long)iVar10 * -8;
      pDVar6 = local_58 + (long)iVar10 * 8 + 8;
      do {
        pQVar7 = *(QArrayData **)pDVar6;
        if (*(int *)pQVar7 == 0) {
LAB_10003ea50:
          QArrayData::deallocate(pQVar7,2,8);
        }
        else if (*(int *)pQVar7 != -1) {
          LOCK();
          *(int *)pQVar7 = *(int *)pQVar7 + -1;
          local_31 = *(int *)pQVar7 != 0;
          UNLOCK();
          if (!(bool)local_31) {
            pQVar7 = *(QArrayData **)pDVar6;
            goto LAB_10003ea50;
          }
        }
        pDVar6 = pDVar6 + -8;
        lVar11 = lVar11 + 8;
      } while (lVar11 != 0);
    }
    QListData::dispose(pDVar2);
  }
LAB_10003ea71:
  std::string::~string(local_50);
  return;
}

