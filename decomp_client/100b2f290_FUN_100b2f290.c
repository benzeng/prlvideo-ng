
int FUN_100b2f290(long *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  long *plVar3;
  int iVar4;
  int iVar5;
  size_t sVar6;
  long *plVar7;
  long *plVar8;
  QArrayData *local_60;
  QArrayData *local_58;
  QArrayData *local_50;
  QArrayData *local_48;
  QArrayData *local_40;
  undefined1 local_31;
  
  local_40 = (QArrayData *)PTR_shared_null_1021e1288;
  local_48 = (QArrayData *)PTR_shared_null_1021e1288;
  iVar4 = -0x7fffffe8;
  if (param_2 != 0) {
    sVar6 = FUN_100b1ffb0(*(undefined8 *)(*param_1 + 0x20));
    plVar7 = _valloc(sVar6);
    iVar4 = -0x7ffffffe;
    if (plVar7 != (long *)0x0) {
      plVar8 = (long *)*param_1;
      iVar4 = (**(code **)(*(long *)((long)plVar8 + *(long *)(*plVar8 + -0x18)) + 0x98))
                        ((long)plVar8 + *(long *)(*plVar8 + -0x18),plVar7,sVar6 & 0xffffffff,param_2
                        );
      if ((-1 < iVar4) && (iVar4 = -0x7ffdefcd, *plVar7 == -0x54dcb310dc231579)) {
        QByteArray::QByteArray((QByteArray *)&local_50,(char *)(plVar7 + 1),0x10);
        QByteArray::operator=((QByteArray *)&local_40,(QByteArray *)&local_50);
        if (*(int *)local_50 != -1) {
          if (*(int *)local_50 != 0) {
            LOCK();
            *(int *)local_50 = *(int *)local_50 + -1;
            local_31 = *(int *)local_50 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b2f386;
          }
          QArrayData::deallocate(local_50,1,8);
        }
LAB_100b2f386:
        plVar8 = plVar7 + 3;
        QByteArray::fromRawData((char *)&local_60,(int)plVar8);
        QCryptographicHash::hash(&local_58,&local_60,1);
        QByteArray::operator=((QByteArray *)&local_48,(QByteArray *)&local_58);
        if (*(int *)local_58 != -1) {
          if (*(int *)local_58 != 0) {
            LOCK();
            *(int *)local_58 = *(int *)local_58 + -1;
            local_31 = *(int *)local_58 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b2f3ea;
          }
          QArrayData::deallocate(local_58,1,8);
        }
LAB_100b2f3ea:
        if (*(int *)local_60 != -1) {
          if (*(int *)local_60 != 0) {
            LOCK();
            *(int *)local_60 = *(int *)local_60 + -1;
            local_31 = *(int *)local_60 != 0;
            UNLOCK();
            if ((bool)local_31) goto LAB_100b2f41a;
          }
          QArrayData::deallocate(local_60,1,8);
        }
LAB_100b2f41a:
        if ((*(int *)(local_48 + 4) == *(int *)(local_40 + 4)) &&
           (iVar5 = _memcmp(local_48 + *(long *)(local_48 + 0x10),
                            local_40 + *(long *)(local_40 + 0x10),(long)*(int *)(local_48 + 4)),
           iVar5 == 0)) {
          while (iVar5 = FUN_100b2f100(param_1,plVar8,(long)plVar7 + sVar6), 0 < iVar5) {
            plVar8 = (long *)((long)plVar8 + (long)(int)(iVar5 + 7U & 0xfffffff8));
          }
          if (iVar5 == -1) {
            for (plVar8 = (long *)param_1[2]; plVar8 != param_1 + 1; plVar8 = (long *)plVar8[1]) {
              if ((long *)plVar8[2] != (long *)0x0) {
                (**(code **)(*(long *)plVar8[2] + 0x20))();
              }
            }
            if (param_1[3] != 0) {
              lVar1 = param_1[1];
              plVar8 = (long *)param_1[2];
              lVar2 = *plVar8;
              *(undefined8 *)(lVar2 + 8) = *(undefined8 *)(lVar1 + 8);
              **(long **)(lVar1 + 8) = lVar2;
              param_1[3] = 0;
              while (plVar8 != param_1 + 1) {
                plVar3 = (long *)plVar8[1];
                operator_delete(plVar8);
                plVar8 = plVar3;
              }
            }
          }
          else {
            param_1[5] = sVar6;
            iVar4 = 0;
          }
        }
        else {
          FUN_100df99c0("","dimg",0,"Error: md5 check failed for optional header");
        }
      }
      _free(plVar7);
    }
  }
  if (*(int *)local_48 != -1) {
    if (*(int *)local_48 != 0) {
      LOCK();
      *(int *)local_48 = *(int *)local_48 + -1;
      local_31 = *(int *)local_48 != 0;
      UNLOCK();
      if ((bool)local_31) goto LAB_100b2f49a;
    }
    QArrayData::deallocate(local_48,1,8);
  }
LAB_100b2f49a:
  if (*(int *)local_40 != -1) {
    if (*(int *)local_40 != 0) {
      LOCK();
      *(int *)local_40 = *(int *)local_40 + -1;
      UNLOCK();
      if (*(int *)local_40 != 0) {
        return iVar4;
      }
      local_31 = 0;
    }
    QArrayData::deallocate(local_40,1,8);
  }
  return iVar4;
}

