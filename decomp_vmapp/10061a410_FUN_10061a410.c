
void FUN_10061a410(undefined8 *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &PTR____cxa_pure_virtual_100bc8348;
  piVar2 = (int *)param_1[1];
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar1 = *piVar2;
    *piVar2 = *piVar2 + -1;
    UNLOCK();
    if (iVar1 < 0) {
      FUN_1008e3970("","prlplg",0,"IPlugin::~IPlugin m_pRefCounter = %d <0",iVar1 + 1);
      FUN_1008e3970("","prlplg",0,"ASSERT( %s ) occured in %s:%d [%s]","nPrev >= 0","Base.cpp",0x1e,
                    "~IPlugin");
    }
  }
  return;
}

