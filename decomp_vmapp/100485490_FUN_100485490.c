
void FUN_100485490(undefined8 param_1,long *param_2,undefined8 param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  QString *pQVar4;
  long lVar5;
  undefined *local_38;
  
  local_38 = PTR_shared_null_100ba2188;
  lVar5 = *param_2;
  iVar1 = *(int *)(lVar5 + 8);
  if (iVar1 != *(int *)(lVar5 + 0xc)) {
    puVar3 = (undefined8 *)(lVar5 + 0x10 + (long)iVar1 * 8);
    lVar5 = (long)*(int *)(lVar5 + 0xc) * 8 + (long)iVar1 * -8;
    do {
      pQVar4 = (QString *)*puVar3;
      if (*(int *)&pQVar4[2].field0_0x0 == 0) {
        cVar2 = QFile::exists(pQVar4);
        pQVar4 = (QString *)*puVar3;
        if (cVar2 == '\0') goto LAB_100485510;
        FUN_10000c490(&local_38,pQVar4 + 1);
      }
      else {
LAB_100485510:
        FUN_10000c490(&local_38,pQVar4);
      }
      puVar3 = puVar3 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  FUN_100485570(param_1,param_3,&local_38);
  FUN_100013180(&local_38);
  return;
}

