
undefined1 FUN_1000d7d50(long param_1,long param_2,undefined1 param_3)

{
  long *plVar1;
  QString *pQVar2;
  long lVar3;
  char cVar4;
  uint uVar5;
  uint *puVar6;
  long lVar7;
  long lVar8;
  QArrayData *local_40;
  
  plVar1 = (long *)(param_1 + 0x78);
  puVar6 = *(uint **)(param_1 + 0x78);
  if (1 < *puVar6) {
    FUN_1000e77c0(plVar1);
    puVar6 = (uint *)*plVar1;
  }
  pQVar2 = (QString *)(param_2 + 0x10);
  lVar3 = *(long *)(puVar6 + 4);
  lVar8 = 0;
  if (*(long *)(puVar6 + 4) != 0) {
    do {
      while (lVar7 = lVar3, cVar4 = operator<((QString *)(lVar7 + 0x18),pQVar2), cVar4 != '\0') {
        lVar3 = *(long *)(lVar7 + 0x10);
        if (*(long *)(lVar7 + 0x10) == 0) {
          lVar7 = lVar8;
          if (lVar8 == 0) goto LAB_1000d7df6;
          goto LAB_1000d7de6;
        }
      }
      lVar3 = *(long *)(lVar7 + 8);
      lVar8 = lVar7;
    } while (*(long *)(lVar7 + 8) != 0);
LAB_1000d7de6:
    cVar4 = operator<(pQVar2,(QString *)(lVar7 + 0x18));
    if (cVar4 == '\0') goto LAB_1000d7dfe;
  }
LAB_1000d7df6:
  lVar7 = *plVar1 + 8;
LAB_1000d7dfe:
  if (*plVar1 + 8 == lVar7) {
    cVar4 = FUN_10004d550(*(undefined8 *)(param_1 + 0xf0),pQVar2,param_3);
    if (cVar4 == '\0') {
      QString::toUtf8();
      FUN_100df99c0("SGAC","prl_client_app",0,"Error: failed to launch bundle \"%s\"",
                    local_40 + *(long *)(local_40 + 0x10));
      if (*(int *)local_40 != -1) {
        if (*(int *)local_40 != 0) {
          LOCK();
          *(int *)local_40 = *(int *)local_40 + -1;
          UNLOCK();
          if (*(int *)local_40 != 0) {
            return 0;
          }
        }
        QArrayData::deallocate(local_40,1,8);
      }
      return 0;
    }
    uVar5 = *(uint *)(param_2 + 0x24);
  }
  else {
    uVar5 = *(uint *)(param_2 + 0x24) | 0x20;
    *(uint *)(param_2 + 0x24) = uVar5;
  }
  *(uint *)(param_2 + 0x24) = uVar5 | 0x18;
  return 1;
}

