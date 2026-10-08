
void FUN_100a35460(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  long lVar1;
  undefined *puVar2;
  char cVar3;
  int iVar4;
  undefined8 uVar5;
  long lVar6;
  QWidget *pQVar7;
  QArrayData *local_40;
  QArrayData *local_38;
  undefined1 local_29;
  
  uVar5 = FUN_100319c50(param_2);
  cVar3 = FUN_100330a50(uVar5);
  if (cVar3 == '\0') {
    lVar6 = FUN_100319960(param_2);
    uVar5 = 0;
    if (lVar6 != 0) {
      pQVar7 = (QWidget *)FUN_100326190(lVar6);
      uVar5 = 0;
      if (pQVar7 != (QWidget *)0x0) {
        lVar6 = MacUtils::getWindowRef(pQVar7);
        puVar2 = PTR__objc_msgSend_1021e1c68;
        uVar5 = 0;
        if (lVar6 != 0) {
          uVar5 = (*(code *)PTR__objc_msgSend_1021e1c68)
                            (PTR_SSBaseDelegate_10226aa80,PTR_s_alloc_102268b58);
          uVar5 = (*(code *)puVar2)(uVar5,PTR_s_initWithParentWindow__10226a270,lVar6);
          uVar5 = (*(code *)puVar2)(uVar5,PTR_s_autorelease_102269a10);
        }
      }
    }
    FUN_100a493e0(uVar5,param_3,param_4);
    return;
  }
  FUN_1003193e0(&local_38,param_2);
  lVar6 = FUN_1000a9690(&local_38);
  if (*(int *)local_38 != -1) {
    if (*(int *)local_38 != 0) {
      LOCK();
      *(int *)local_38 = *(int *)local_38 + -1;
      local_29 = *(int *)local_38 != 0;
      UNLOCK();
      if ((bool)local_29) goto LAB_100a354da;
    }
    QArrayData::deallocate(local_38,2,8);
  }
LAB_100a354da:
  if (lVar6 != 0) {
    uVar5 = FUN_100319c00(param_2);
    iVar4 = FUN_100328b80(uVar5);
    QByteArray::QByteArray((QByteArray *)&local_40,0x50,'\0');
    if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
      QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f)
      ;
    }
    lVar1 = *(long *)(local_40 + 0x10);
    *(undefined4 *)(local_40 + lVar1) = 0x1c;
    *(int *)(local_40 + lVar1 + 8) = (int)param_4 + 0x50;
    *(int *)(local_40 + lVar1 + 0x20) = iVar4;
    QByteArray::append((char *)&local_40,(int)param_3);
    FUN_1000b7a20(lVar6,(long)iVar4,&local_40);
    if (*(int *)local_40 != -1) {
      if (*(int *)local_40 != 0) {
        LOCK();
        *(int *)local_40 = *(int *)local_40 + -1;
        UNLOCK();
        if (*(int *)local_40 != 0) {
          return;
        }
        local_29 = 0;
      }
      QArrayData::deallocate(local_40,1,8);
    }
  }
  return;
}

