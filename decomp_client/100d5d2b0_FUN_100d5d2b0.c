
byte FUN_100d5d2b0(char *param_1,undefined8 param_2)

{
  bool bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  size_t sVar5;
  FILE *pFVar6;
  char *pcVar7;
  byte bVar8;
  long lVar9;
  QArrayData *local_460;
  QArrayData *local_458;
  QArrayData *local_450;
  QArrayData *local_448;
  undefined1 local_439;
  char local_438 [1024];
  long local_38;
  
  lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar9;
  local_450 = (QArrayData *)QString::fromAscii_helper("%1/sources/product.ini",0x16);
  iVar4 = -1;
  if (param_1 != (char *)0x0) {
    sVar5 = _strlen(param_1);
    iVar4 = (int)sVar5;
  }
  local_458 = (QArrayData *)QString::fromAscii_helper(param_1,iVar4);
  QString::arg(&local_448,&local_450,&local_458,0,0x20);
  if (*(int *)local_458 != -1) {
    if (*(int *)local_458 != 0) {
      LOCK();
      *(int *)local_458 = *(int *)local_458 + -1;
      local_439 = *(int *)local_458 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100d5d372;
    }
    QArrayData::deallocate(local_458,2,8);
  }
LAB_100d5d372:
  if (*(int *)local_450 != -1) {
    if (*(int *)local_450 != 0) {
      LOCK();
      *(int *)local_450 = *(int *)local_450 + -1;
      local_439 = *(int *)local_450 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100d5d3ae;
    }
    QArrayData::deallocate(local_450,2,8);
  }
LAB_100d5d3ae:
  QString::toUtf8();
  pFVar6 = _fopen((char *)(local_460 + *(long *)(local_460 + 0x10)),"r");
  if (*(int *)local_460 != -1) {
    if (*(int *)local_460 != 0) {
      LOCK();
      *(int *)local_460 = *(int *)local_460 + -1;
      local_439 = *(int *)local_460 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100d5d41e;
    }
    QArrayData::deallocate(local_460,1,8);
  }
LAB_100d5d41e:
  bVar8 = 0;
  bVar2 = 0;
  if (pFVar6 != (FILE *)0x0) {
    pcVar7 = _fgets(local_438,0x3ff,pFVar6);
    if (pcVar7 != (char *)0x0) {
      bVar1 = false;
      do {
        if ((bVar1) && (iVar4 = qstrnicmp(local_438,"Type=Server",0xb), iVar4 == 0)) {
          _fclose(pFVar6);
          bVar8 = 1;
          FUN_100d5d680(param_1,param_2);
          bVar2 = 1;
          lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
          goto LAB_100d5d4f2;
        }
        iVar4 = _strncmp(local_438,"[sku]",5);
        bVar3 = true;
        if (iVar4 != 0) {
          bVar3 = bVar1;
        }
        bVar1 = bVar3;
        pcVar7 = _fgets(local_438,0x3ff,pFVar6);
      } while (pcVar7 != (char *)0x0);
    }
    _fclose(pFVar6);
    bVar8 = 1;
    bVar2 = 0;
    lVar9 = *(long *)PTR____stack_chk_guard_1021e1840;
  }
LAB_100d5d4f2:
  if (*(int *)local_448 != -1) {
    if (*(int *)local_448 != 0) {
      LOCK();
      *(int *)local_448 = *(int *)local_448 + -1;
      local_439 = *(int *)local_448 != 0;
      UNLOCK();
      if ((bool)local_439) goto LAB_100d5d52e;
    }
    QArrayData::deallocate(local_448,2,8);
  }
LAB_100d5d52e:
  if (lVar9 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return bVar8 & bVar2;
}

