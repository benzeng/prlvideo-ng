
undefined4 FUN_100029730(undefined8 param_1,long *param_2,undefined8 *param_3)

{
  undefined8 *puVar1;
  long lVar2;
  long lVar3;
  long lVar4;
  undefined8 uVar5;
  long *plVar6;
  char cVar7;
  undefined4 uVar8;
  long lVar9;
  undefined4 extraout_var;
  uint *puVar10;
  long *local_38;
  
  QMutex::lock();
  lVar2 = *param_2;
  lVar3 = *(long *)(lVar2 + 0x10);
  local_38 = (long *)0x0;
  cVar7 = FUN_100028960(param_1,*(undefined4 *)(lVar2 + 0x10 + lVar3),&local_38);
  uVar8 = 0xfffffff7;
  if (cVar7 != '\0') {
    QByteArray::resize((int)param_3);
    puVar10 = (uint *)*param_3;
    if ((1 < *puVar10) || (*(long *)(puVar10 + 4) != 0x18)) {
      QByteArray::reallocData(param_3,puVar10[1] + 1,puVar10[2] >> 0x1f);
      puVar10 = (uint *)*param_3;
    }
    plVar6 = local_38;
    puVar1 = (undefined8 *)(lVar2 + lVar3);
    lVar4 = *(long *)(puVar10 + 4);
    *(undefined4 *)((long)puVar10 + lVar4 + 0x30) = *(undefined4 *)(puVar1 + 6);
    *(undefined8 *)((long)puVar10 + lVar4 + 0x28) = puVar1[5];
    *(undefined8 *)((long)puVar10 + lVar4 + 0x20) = puVar1[4];
    *(undefined8 *)((long)puVar10 + lVar4 + 0x18) = puVar1[3];
    *(undefined8 *)((long)puVar10 + lVar4 + 0x10) = puVar1[2];
    uVar5 = *puVar1;
    *(undefined8 *)((long)puVar10 + lVar4 + 8) = puVar1[1];
    *(undefined8 *)((long)puVar10 + lVar4) = uVar5;
    if (local_38 != (long *)0x0) {
      cVar7 = (**(code **)(*local_38 + 0x88))
                        (local_38,CONCAT44(*(undefined4 *)(lVar4 + 0x24 + (long)puVar10),
                                           *(undefined4 *)(lVar4 + 0x14 + (long)puVar10)));
      if (cVar7 != '\0') {
        lVar9 = QIODevice::read((char *)plVar6,lVar4 + 0x30 + (long)puVar10);
        if (-1 < lVar9) {
          *(int *)(lVar4 + 0x18 + (long)puVar10) = (int)lVar9;
          uVar8 = (**(code **)(*plVar6 + 0x80))(plVar6);
          *(undefined4 *)(lVar4 + 0x1c + (long)puVar10) = uVar8;
          (**(code **)(*plVar6 + 0x80))(plVar6);
          *(undefined4 *)(lVar4 + 0x20 + (long)puVar10) = extraout_var;
          if (lVar9 < (long)(ulong)*(uint *)(lVar2 + 0x18 + lVar3)) {
            FUN_100028b70(param_1,*(undefined4 *)(lVar2 + 0x10 + lVar3));
          }
          uVar8 = 0;
          QByteArray::resize((int)param_3);
        }
      }
    }
  }
  QMutex::unlock();
  return uVar8;
}

