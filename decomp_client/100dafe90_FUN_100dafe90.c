
undefined8 * FUN_100dafe90(long param_1)

{
  undefined *puVar1;
  undefined8 *puVar2;
  size_t sVar3;
  QArrayData *pQVar4;
  int iVar5;
  
  puVar2 = operator_new(0x18);
  puVar1 = PTR_s_prl_disp_service_10230fcb8;
  iVar5 = -1;
  if (PTR_s_prl_disp_service_10230fcb8 != (undefined *)0x0) {
    sVar3 = _strlen(PTR_s_prl_disp_service_10230fcb8);
    iVar5 = (int)sVar3;
  }
  pQVar4 = (QArrayData *)QString::fromAscii_helper(puVar1,iVar5);
  *puVar2 = &PTR_FUN_10225c058;
  *(undefined4 *)(puVar2 + 1) = 0xffffffff;
  *(undefined4 *)((long)puVar2 + 0xc) = 0xffffffff;
  puVar2[2] = pQVar4;
  iVar5 = *(int *)pQVar4;
  if (1 < iVar5 + 1U) {
    LOCK();
    *(int *)pQVar4 = *(int *)pQVar4 + 1;
    UNLOCK();
    iVar5 = *(int *)pQVar4;
  }
  if (iVar5 != -1) {
    if (iVar5 != 0) {
      LOCK();
      *(int *)pQVar4 = *(int *)pQVar4 + -1;
      UNLOCK();
      if (*(int *)pQVar4 != 0) goto LAB_100daff29;
    }
    QArrayData::deallocate(pQVar4,2,8);
  }
LAB_100daff29:
  *(undefined4 *)(puVar2 + 1) = *(undefined4 *)(param_1 + 8);
  *(undefined4 *)((long)puVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
  return puVar2;
}

