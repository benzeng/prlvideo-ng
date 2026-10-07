
undefined8 * FUN_10009a4e0(undefined8 *param_1,long *param_2)

{
  long *plVar1;
  CHwPrinter *pCVar2;
  char cVar3;
  long lVar4;
  long lVar5;
  CHwPrinter *this;
  undefined8 *puVar6;
  long lVar7;
  int iVar8;
  CHwPrinter *pCVar9;
  QString local_70;
  Data *local_68;
  Data *local_60;
  Data *local_58;
  undefined4 local_50;
  QString local_48;
  QString local_40;
  undefined1 local_31;
  
  local_48.field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_100ba20d0;
  lVar4 = FUN_1003df500();
  if (lVar4 == 0) {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","vm",3,"Failed to obtain default printer");
    }
  }
  else {
    lVar5 = _PMPrinterGetID(lVar4);
    if (lVar5 == 0) {
      FUN_1008e3970("","vm",0,"Failed to obtain default printer ID");
    }
    else {
      _CFRetain(lVar5);
      FUN_100788b70(&local_40,lVar5);
      QString::operator=(&local_48,&local_40);
      if (*(int *)local_40.field0_0x0 != -1) {
        if (*(int *)local_40.field0_0x0 != 0) {
          LOCK();
          *(int *)local_40.field0_0x0 = *(int *)local_40.field0_0x0 + -1;
          local_31 = *(int *)local_40.field0_0x0 != 0;
          UNLOCK();
          if ((bool)local_31) goto LAB_10009a574;
        }
        QArrayData::deallocate((QArrayData *)local_40.field0_0x0,2,8);
      }
LAB_10009a574:
      _CFRelease(lVar5);
    }
    _PMRelease(lVar4);
  }
  if (*(int *)(local_48.field0_0x0 + 4) == 0) {
    if (2 < DAT_1011b55f8) {
      FUN_1008e3970("","vm",3,"Failed to obtain name of default printer");
    }
  }
  else {
    plVar1 = *(long **)(*(long *)(*param_2 + 0x10) + 0x188);
    local_68 = (Data *)*plVar1;
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 == 0) {
        QListData::detach((int)&local_68);
        lVar5 = (long)*(int *)(local_68 + 8);
        lVar4 = *plVar1;
        if (((Data *)(lVar4 + (long)*(int *)(lVar4 + 8) * 8) != local_68 + lVar5 * 8) &&
           (lVar7 = *(int *)(local_68 + 0xc) - lVar5,
           lVar7 != 0 && lVar5 <= *(int *)(local_68 + 0xc))) {
          _memcpy(local_68 + lVar5 * 8 + 0x10,(void *)(lVar4 + 0x10 + (long)*(int *)(lVar4 + 8) * 8)
                  ,lVar7 * 8);
        }
      }
      else {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + 1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
      }
    }
    local_60 = local_68 + (long)*(int *)(local_68 + 8) * 8 + 0x10;
    local_58 = local_68 + (long)*(int *)(local_68 + 0xc) * 8 + 0x10;
    local_50 = 1;
    iVar8 = 4;
    if (*(int *)(local_68 + 8) != *(int *)(local_68 + 0xc)) {
      do {
        local_50 = 1;
        pCVar2 = *(CHwPrinter **)local_60;
        (**(code **)(*(long *)pCVar2 + 0xb8))(&local_70,pCVar2);
        cVar3 = operator==(&local_48,&local_70);
        if (*(int *)local_70.field0_0x0 != -1) {
          if (*(int *)local_70.field0_0x0 != 0) {
            LOCK();
            *(int *)local_70.field0_0x0 = *(int *)local_70.field0_0x0 + -1;
            local_31 = *(int *)local_70.field0_0x0 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_10009a723;
          }
          QArrayData::deallocate((QArrayData *)local_70.field0_0x0,2,8);
        }
LAB_10009a723:
        if (cVar3 != '\0') {
          this = operator_new(0xc0,(nothrow_t *)PTR_nothrow_100ba21c8);
          pCVar9 = (CHwPrinter *)0x0;
          if (this != (CHwPrinter *)0x0) {
            CHwPrinter::CHwPrinter(this,pCVar2);
            pCVar9 = this;
          }
          puVar6 = operator_new(0x18,(nothrow_t *)PTR_nothrow_100ba21c8);
          if (puVar6 == (undefined8 *)0x0) {
            puVar6 = (undefined8 *)0x0;
            if (pCVar9 != (CHwPrinter *)0x0) {
              puVar6 = (undefined8 *)0x0;
              (**(code **)(*(long *)pCVar9 + 0x88))(pCVar9);
            }
          }
          else {
            *(undefined4 *)(puVar6 + 1) = 1;
            puVar6[2] = pCVar9;
            *puVar6 = &PTR_FUN_100bef8f0;
          }
          *param_1 = puVar6;
          iVar8 = 1;
          break;
        }
        local_60 = local_60 + 8;
        local_50 = 1;
      } while (local_60 != local_58);
    }
    if (*(int *)local_68 != -1) {
      if (*(int *)local_68 != 0) {
        LOCK();
        *(int *)local_68 = *(int *)local_68 + -1;
        local_31 = *(int *)local_68 != 0;
        UNLOCK();
        if ((bool)local_31) goto LAB_10009a7f3;
      }
      QListData::dispose(local_68);
    }
LAB_10009a7f3:
    if (iVar8 != 4) goto LAB_10009a801;
  }
  *param_1 = 0;
LAB_10009a801:
  if (*(int *)local_48.field0_0x0 != -1) {
    if (*(int *)local_48.field0_0x0 != 0) {
      LOCK();
      *(int *)local_48.field0_0x0 = *(int *)local_48.field0_0x0 + -1;
      UNLOCK();
      if (*(int *)local_48.field0_0x0 != 0) {
        return param_1;
      }
      local_31 = 0;
    }
    QArrayData::deallocate((QArrayData *)local_48.field0_0x0,2,8);
  }
  return param_1;
}

