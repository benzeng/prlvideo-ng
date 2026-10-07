
void FUN_100256850(undefined8 *param_1,undefined8 *param_2)

{
  undefined8 uVar1;
  QArrayData *local_30;
  undefined1 local_23;
  undefined1 local_22;
  
  FUN_1002e5870();
  *param_1 = &PTR_FUN_100bae770;
  uVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)
                    (PTR_CVideoDataAVF_objc_100bedba8,PTR_s_alloc_100bed228);
  local_30 = (QArrayData *)*param_2;
  if (1 < *(int *)local_30 + 1U) {
    LOCK();
    *(int *)local_30 = *(int *)local_30 + 1;
    local_23 = *(int *)local_30 != 0;
    UNLOCK();
  }
  uVar1 = (*(code *)PTR__objc_msgSend_100ba25e8)(uVar1,PTR_s_init__100bed6b0,&local_30);
  param_1[3] = uVar1;
  if (*(int *)local_30 != -1) {
    if (*(int *)local_30 != 0) {
      LOCK();
      *(int *)local_30 = *(int *)local_30 + -1;
      UNLOCK();
      if (*(int *)local_30 != 0) {
        return;
      }
      local_22 = 0;
    }
    QArrayData::deallocate(local_30,2,8);
  }
  return;
}

