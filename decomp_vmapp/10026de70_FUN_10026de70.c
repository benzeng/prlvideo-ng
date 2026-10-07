
void FUN_10026de70(undefined8 *param_1)

{
  QArrayData *pQVar1;
  
  *param_1 = &PTR_FUN_100baf290;
  param_1[1] = &PTR_metaObject_100baf358;
  param_1[0xd] = &PTR_FUN_100baf3d0;
  param_1[0x14] = &PTR_FUN_100baf400;
  FUN_100257ee0();
  FUN_10026dff0(param_1);
  pQVar1 = (QArrayData *)param_1[0x25e];
  if (*(int *)pQVar1 != -1) {
    if (*(int *)pQVar1 != 0) {
      LOCK();
      *(int *)pQVar1 = *(int *)pQVar1 + -1;
      UNLOCK();
      if (*(int *)pQVar1 != 0) goto LAB_10026deef;
      pQVar1 = (QArrayData *)param_1[0x25e];
    }
    QArrayData::deallocate(pQVar1,2,8);
  }
LAB_10026deef:
  FUN_1003fd2e0(param_1 + 0x149);
  FUN_100401dd0(param_1 + 0x11b);
  FUN_10008d470(param_1 + 0x16);
  FUN_10025b110(param_1 + 0xd);
  FUN_100257ad0(param_1);
  return;
}

