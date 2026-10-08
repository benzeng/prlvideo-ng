
QString * FUN_100cd7c70(QString *param_1,QString *param_2,byte *param_3)

{
  long lVar1;
  undefined8 uVar2;
  char cVar3;
  byte bVar4;
  long lVar5;
  long lVar6;
  undefined8 uVar7;
  long lVar8;
  QString local_148;
  undefined1 local_139;
  char local_138 [256];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  lVar5 = _TISCreateInputSourceList(0,0);
  *param_3 = 0;
  param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  if (lVar5 != 0) {
    uVar2 = *(undefined8 *)PTR__kTISPropertyInputSourceIsSelected_1021e1bd0;
    for (lVar8 = 0; lVar6 = _CFArrayGetCount(lVar5), lVar8 < lVar6; lVar8 = lVar8 + 1) {
      lVar6 = _CFArrayGetValueAtIndex(lVar5,lVar8);
      if (lVar6 != 0) {
        uVar7 = _TISGetInputSourceProperty(lVar6,uVar2);
        cVar3 = _CFBooleanGetValue(uVar7);
        if (cVar3 != '\0') {
          lVar8 = _TISGetInputSourceProperty
                            (lVar6,*(undefined8 *)PTR__kTISPropertyInputSourceID_1021e1bc8);
          if ((lVar8 != 0) &&
             (cVar3 = _CFStringGetCString(lVar8,local_138,0x100,0x8000100), cVar3 != '\0')) {
            _strlen(local_138);
            QString::fromUtf8_helper((char *)&local_148,(int)local_138);
            QString::operator=(param_1,&local_148);
            if (*(int *)local_148.field0_0x0 != -1) {
              if (*(int *)local_148.field0_0x0 != 0) {
                LOCK();
                *(int *)local_148.field0_0x0 = *(int *)local_148.field0_0x0 + -1;
                local_139 = *(int *)local_148.field0_0x0 != 0;
                UNLOCK();
                if ((bool)local_139) goto LAB_100cd7ddc;
              }
              QArrayData::deallocate((QArrayData *)local_148.field0_0x0,2,8);
            }
LAB_100cd7ddc:
            bVar4 = operator==(param_2,param_1);
            *param_3 = bVar4 ^ 1;
          }
          break;
        }
      }
    }
    _CFRelease(lVar5);
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

