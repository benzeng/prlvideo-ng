
int FUN_100b2f760(long *param_1,undefined8 *param_2)

{
  uint *puVar1;
  long *plVar2;
  long *plVar3;
  undefined8 uVar4;
  int iVar5;
  size_t sVar6;
  undefined8 *puVar7;
  long lVar8;
  long *plVar9;
  long *plVar10;
  QArrayData *pQVar11;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  pQVar11 = (QArrayData *)PTR_shared_null_1021e1288;
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  sVar6 = FUN_100b1ffb0(*(undefined8 *)(*param_1 + 0x20));
  puVar7 = _valloc(sVar6);
  if (puVar7 == (undefined8 *)0x0) {
    iVar5 = -0x7ffffffe;
    goto LAB_100b2fa5f;
  }
  ___bzero(puVar7,sVar6);
  *puVar7 = 0xab234cef23dcea87;
  plVar10 = (long *)param_1[2];
  if (plVar10 != param_1 + 1) {
    plVar9 = puVar7 + 3;
    do {
      plVar3 = (long *)plVar10[2];
      *plVar9 = plVar3[2];
      lVar8 = (**(code **)(*plVar3 + 0x28))(plVar3);
      plVar9[1] = lVar8;
      puVar1 = (uint *)(plVar9 + 2);
      iVar5 = (**(code **)(*plVar3 + 8))(plVar3,0,puVar1);
      if (iVar5 < 0) {
        FUN_100df99c0("","dimg",0,"Error: failed to save extension: %llx, err: %x, skip it",*plVar9)
        ;
      }
      else {
        plVar2 = plVar9 + 3;
        if (((long *)((long)puVar7 + sVar6) < plVar2) ||
           ((long *)((long)puVar7 + sVar6) < (long *)((ulong)*puVar1 + (long)plVar2))) {
          FUN_100df99c0("","dimg",0,"Error: extensions are not fit in 1 block");
          iVar5 = -0x7ffffdfc;
          goto LAB_100b2fa53;
        }
        iVar5 = (**(code **)(*plVar3 + 8))(plVar3,plVar2,puVar1);
        if (iVar5 < 0) {
          FUN_100df99c0("","dimg",0,"Error: failed to save extension: %llx, err: %x, skip it",
                        *plVar9,iVar5);
        }
        else {
          plVar9 = (long *)((long)plVar2 + (ulong)(*puVar1 + 7 & 0xfffffff8));
        }
      }
      plVar10 = (long *)plVar10[1];
    } while (plVar10 != param_1 + 1);
  }
  QByteArray::fromRawData((char *)&local_50,(int)(puVar7 + 3));
  QCryptographicHash::hash(&local_48,&local_50,1);
  QByteArray::operator=((QByteArray *)&local_40,(QByteArray *)&local_48);
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b2f966;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100b2f966:
  if (*(int *)local_50 != -1) {
    if (*(int *)local_50 != 0) {
      LOCK();
      *(int *)local_50 = *(int *)local_50 + -1;
      local_31 = *(int *)local_50 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b2f996;
    }
    QArrayData::deallocate(local_50,1,8);
  }
LAB_100b2f996:
  if ((1 < *(uint *)local_40) || (*(long *)(local_40 + 0x10) != 0x18)) {
    QByteArray::reallocData(&local_40,*(uint *)(local_40 + 4) + 1,*(uint *)(local_40 + 8) >> 0x1f);
  }
  uVar4 = *(undefined8 *)(local_40 + *(long *)(local_40 + 0x10));
  puVar7[2] = *(undefined8 *)(local_40 + *(long *)(local_40 + 0x10) + 8);
  puVar7[1] = uVar4;
  iVar5 = (**(code **)(*(long *)*param_1 + 0x148))((long *)*param_1,param_2);
  if (-1 < iVar5) {
    plVar10 = (long *)*param_1;
    iVar5 = (**(code **)(*(long *)((long)plVar10 + *(long *)(*plVar10 + -0x18)) + 0x90))
                      ((long)plVar10 + *(long *)(*plVar10 + -0x18),puVar7,sVar6 & 0xffffffff,
                       *param_2);
    if (-1 < iVar5) {
      param_1[5] = sVar6;
      iVar5 = 0;
    }
  }
LAB_100b2fa53:
  _free(puVar7);
  pQVar11 = local_40;
LAB_100b2fa5f:
  if (*(uint *)pQVar11 != 0xffffffff) {
    if (*(uint *)pQVar11 != 0) {
      LOCK();
      *(uint *)pQVar11 = *(uint *)pQVar11 - 1;
      UNLOCK();
      if (*(uint *)pQVar11 != 0) {
        return iVar5;
      }
      local_31 = 0;
      pQVar11 = local_40;
    }
    QArrayData::deallocate(pQVar11,1,8);
  }
  return iVar5;
}

