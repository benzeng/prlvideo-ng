
void FUN_1004090c0(long *param_1,QString *param_2,QString *param_3)

{
  long lVar1;
  undefined8 *puVar2;
  QString *pQVar3;
  ulong uVar4;
  QTypedArrayData<unsigned_short> *pQVar5;
  ulong uVar6;
  QString *pQVar7;
  QString *local_40;
  
  uVar4 = (long)param_3 - (long)param_2 >> 3;
  local_40 = (QString *)*param_1;
  if ((ulong)(param_1[2] - (long)local_40 >> 3) < uVar4) {
    FUN_1004092e0(param_1);
    if (uVar4 >> 0x3d != 0) {
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    if ((ulong)(param_1[2] - *param_1 >> 3) < 0xfffffffffffffff) {
      uVar6 = param_1[2] - *param_1 >> 2;
      if (uVar6 < uVar4) {
        uVar6 = uVar4;
      }
      if (0x1fffffffffffffff < uVar6) {
                    /* WARNING: Subroutine does not return */
        std::__vector_base_common<true>::__throw_length_error();
      }
    }
    else {
      uVar6 = 0x1fffffffffffffff;
    }
    puVar2 = operator_new(uVar6 * 8);
    param_1[1] = (long)puVar2;
    *param_1 = (long)puVar2;
    param_1[2] = (long)(puVar2 + uVar6);
    for (; param_2 != param_3; param_2 = param_2 + 1) {
      pQVar5 = param_2->field0_0x0;
      *puVar2 = pQVar5;
      if (1 < *(int *)pQVar5 + 1U) {
        LOCK();
        *(int *)pQVar5 = *(int *)pQVar5 + 1;
        UNLOCK();
      }
      puVar2 = (undefined8 *)(param_1[1] + 8);
      param_1[1] = (long)puVar2;
    }
  }
  else {
    pQVar3 = (QString *)param_1[1];
    uVar6 = (long)pQVar3 - (long)local_40 >> 3;
    pQVar7 = param_3;
    if (uVar4 > uVar6) {
      pQVar7 = param_2 + uVar6;
    }
    if (pQVar7 != param_2) {
      lVar1 = -8 - (long)param_2;
      pQVar3 = local_40;
      do {
        QString::operator=(pQVar3,param_2);
        param_2 = param_2 + 1;
        pQVar3 = pQVar3 + 1;
      } while (pQVar7 != param_2);
      local_40 = (QString *)
                 ((long)&local_40[1].field0_0x0 + ((long)pQVar7 + lVar1 & 0xfffffffffffffff8U));
      pQVar3 = (QString *)param_1[1];
    }
    if (uVar4 <= uVar6) {
      while (pQVar3 != local_40) {
        param_1[1] = (long)(pQVar3 + -1);
        pQVar5 = pQVar3[-1].field0_0x0;
        if (*(int *)pQVar5 != -1) {
          if (*(int *)pQVar5 != 0) {
            LOCK();
            *(int *)pQVar5 = *(int *)pQVar5 + -1;
            UNLOCK();
            if (*(int *)pQVar5 != 0) goto LAB_100409280;
            pQVar5 = pQVar3[-1].field0_0x0;
          }
          QArrayData::deallocate((QArrayData *)pQVar5,2,8);
        }
LAB_100409280:
        pQVar3 = (QString *)param_1[1];
      }
    }
    else {
      for (; pQVar7 != param_3; pQVar7 = pQVar7 + 1) {
        pQVar5 = pQVar7->field0_0x0;
        pQVar3->field0_0x0 = pQVar5;
        if (1 < *(int *)pQVar5 + 1U) {
          LOCK();
          *(int *)pQVar5 = *(int *)pQVar5 + 1;
          UNLOCK();
        }
        pQVar3 = (QString *)(param_1[1] + 8);
        param_1[1] = (long)pQVar3;
      }
    }
  }
  return;
}

