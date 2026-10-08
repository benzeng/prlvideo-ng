
/* WARNING: Restarted to delay deadcode elimination for space: stack */

QString * FUN_1009dbc60(QString *param_1,long param_2)

{
  long lVar1;
  long lVar2;
  QChar *pQVar3;
  int iVar4;
  QChar *local_240;
  undefined1 local_238 [512];
  long local_38;
  
  lVar1 = *(long *)PTR____stack_chk_guard_1021e1840;
  local_38 = lVar1;
  if (param_2 == 0) {
    param_1->field0_0x0 = (QTypedArrayData<unsigned_short> *)PTR_shared_null_1021e1288;
  }
  else {
    lVar2 = _CFStringGetLength(param_2);
    pQVar3 = (QChar *)_CFStringGetCharactersPtr(param_2);
    iVar4 = (int)lVar2;
    if (pQVar3 == (QChar *)0x0) {
      if (iVar4 < 0x101) {
        local_240 = local_238;
      }
      else {
        local_240 = _malloc((lVar2 << 0x20) >> 0x1f);
        if (local_240 == (QChar *)0x0) {
          qBadAlloc();
        }
      }
      _CFStringGetCharacters(param_2,0,lVar2,local_240);
      QString::QString(param_1,local_240,iVar4);
      if (local_240 != local_238) {
        _free(local_240);
      }
    }
    else {
      QString::QString(param_1,pQVar3,iVar4);
    }
  }
  if (lVar1 != local_38) {
                    /* WARNING: Subroutine does not return */
    ___stack_chk_fail();
  }
  return param_1;
}

