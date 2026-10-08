
void FUN_1000e34b0(long *param_1)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  char cVar4;
  int iVar5;
  uint *puVar6;
  QString *pQVar7;
  uint *puVar8;
  long lVar9;
  uint *puVar10;
  uint *local_48;
  undefined1 local_34 [4];
  
  plVar1 = param_1 + 0xf;
  puVar8 = (uint *)param_1[0xf];
  if (1 < *puVar8) {
    FUN_1000e77c0(plVar1);
    puVar8 = (uint *)*plVar1;
  }
  if (*(long *)(puVar8 + 4) == 0) {
    puVar6 = puVar8 + 2;
  }
  else {
    puVar6 = *(uint **)(puVar8 + 8);
  }
  while( true ) {
    if (1 < *puVar8) {
      FUN_1000e77c0(plVar1);
      puVar8 = (uint *)*plVar1;
    }
    if (puVar8 + 2 == puVar6) break;
    iVar5 = _GetProcessPID(puVar6 + 8,local_34);
    if (iVar5 == 0) {
      puVar6 = (uint *)QMapNodeBase::nextNode();
    }
    else {
      puVar6 = (uint *)FUN_1000e57b0(plVar1,puVar6);
    }
    puVar8 = (uint *)*plVar1;
  }
  QMutex::lock();
  puVar8 = (uint *)param_1[0xb];
  if ((int)(puVar8[3] - puVar8[2]) < 1) {
LAB_1000e36ea:
    if (*(int *)(*plVar1 + 4) == 0) {
      QTimer::stop();
    }
    QMutex::unlock();
    return;
  }
  plVar2 = param_1 + 0xb;
  lVar9 = (long)(int)(puVar8[3] - puVar8[2]);
  do {
    if (1 < *puVar8) {
      FUN_1000e6e10(plVar2,puVar8[1]);
      puVar8 = (uint *)*plVar2;
    }
    lVar3 = *(long *)(puVar8 + ((long)(int)puVar8[2] + lVar9 + -1) * 2 + 4);
    if ((*(byte *)(lVar3 + 0x24) & 0x20) != 0) {
      puVar8 = (uint *)*plVar1;
      if (*puVar8 < 2) {
        local_48 = puVar8 + 2;
      }
      else {
        FUN_1000e77c0(plVar1);
        puVar8 = (uint *)*plVar1;
        local_48 = puVar8 + 2;
        if (1 < *puVar8) {
          FUN_1000e77c0(plVar1);
          puVar8 = (uint *)*plVar1;
        }
      }
      pQVar7 = (QString *)(lVar3 + 0x10);
      puVar6 = *(uint **)(puVar8 + 4);
      puVar10 = (uint *)0x0;
      if (*(uint **)(puVar8 + 4) == (uint *)0x0) {
LAB_1000e3688:
        puVar8 = (uint *)(*plVar1 + 8);
      }
      else {
        do {
          while (puVar8 = puVar6, cVar4 = operator<((QString *)(puVar8 + 6),pQVar7), cVar4 != '\0')
          {
            puVar6 = *(uint **)(puVar8 + 4);
            if (*(uint **)(puVar8 + 4) == (uint *)0x0) {
              puVar8 = puVar10;
              if (puVar10 == (uint *)0x0) goto LAB_1000e3688;
              goto LAB_1000e3678;
            }
          }
          puVar6 = *(uint **)(puVar8 + 2);
          puVar10 = puVar8;
        } while (*(uint **)(puVar8 + 2) != (uint *)0x0);
LAB_1000e3678:
        cVar4 = operator<(pQVar7,(QString *)(puVar8 + 6));
        if (cVar4 != '\0') goto LAB_1000e3688;
      }
      if (((local_48 == puVar8) &&
          (*(byte *)(lVar3 + 0x24) = *(byte *)(lVar3 + 0x24) & 0xdf, (char)param_1[9] != '\0')) &&
         (cVar4 = (**(code **)(*param_1 + 0x88))(), cVar4 != '\0')) {
        FUN_10004d550(param_1[0x1e],pQVar7,0);
      }
    }
    if (lVar9 < 2) goto LAB_1000e36ea;
    puVar8 = (uint *)*plVar2;
    lVar9 = lVar9 + -1;
  } while( true );
}

