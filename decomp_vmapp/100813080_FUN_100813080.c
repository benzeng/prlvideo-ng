
void * FUN_100813080(void *param_1,int param_2)

{
  int iVar1;
  void *pvVar2;
  long lVar3;
  
  pvVar2 = (void *)FUN_10081ddd0(0x160,"ssl_sess.c",0xee);
  if (pvVar2 != (void *)0x0) {
    _memcpy(pvVar2,param_1,0x160);
    *(undefined8 *)((long)pvVar2 + 0xf0) = 0;
    *(undefined8 *)((long)pvVar2 + 0x118) = 0;
    *(undefined8 *)((long)pvVar2 + 0x128) = 0;
    *(undefined8 *)((long)pvVar2 + 0x158) = 0;
    *(undefined8 *)((long)pvVar2 + 0x98) = 0;
    *(undefined8 *)((long)pvVar2 + 0x90) = 0;
    *(undefined8 *)((long)pvVar2 + 0x140) = 0;
    *(undefined8 *)((long)pvVar2 + 0x138) = 0;
    *(undefined8 *)((long)pvVar2 + 0x100) = 0;
    *(undefined8 *)((long)pvVar2 + 0xf8) = 0;
    *(undefined8 *)((long)pvVar2 + 0x110) = 0;
    *(undefined8 *)((long)pvVar2 + 0x108) = 0;
    *(undefined4 *)((long)pvVar2 + 0xc0) = 1;
    if (*(long *)((long)param_1 + 0xa8) != 0) {
      FUN_10081d580(*(long *)((long)param_1 + 0xa8) + 0xf0,1,0xf,"ssl_sess.c",0x111);
    }
    if (*(long *)((long)param_1 + 0xb0) != 0) {
      FUN_10081d580(*(long *)((long)param_1 + 0xb0) + 0x1c,1,3,"ssl_sess.c",0x114);
    }
    if (*(long *)((long)param_1 + 0x90) != 0) {
      lVar3 = FUN_10087d050();
      *(long *)((long)pvVar2 + 0x90) = lVar3;
      if (lVar3 == 0) goto LAB_100813300;
    }
    if (*(long *)((long)param_1 + 0x98) != 0) {
      lVar3 = FUN_10087d050();
      *(long *)((long)pvVar2 + 0x98) = lVar3;
      if (lVar3 == 0) goto LAB_100813300;
    }
    if (*(long *)((long)param_1 + 0xf0) != 0) {
      lVar3 = FUN_100884c10();
      *(long *)((long)pvVar2 + 0xf0) = lVar3;
      if (lVar3 == 0) goto LAB_100813300;
    }
    iVar1 = FUN_10081f9c0(3,(long)pvVar2 + 0xf8,(long)param_1 + 0xf8);
    if (iVar1 != 0) {
      if (*(long *)((long)param_1 + 0x118) != 0) {
        lVar3 = FUN_10087d050();
        *(long *)((long)pvVar2 + 0x118) = lVar3;
        if (lVar3 == 0) goto LAB_100813300;
      }
      if (*(long *)((long)param_1 + 0x128) != 0) {
        lVar3 = FUN_10087d170(*(long *)((long)param_1 + 0x128),
                              *(undefined8 *)((long)param_1 + 0x120));
        *(long *)((long)pvVar2 + 0x128) = lVar3;
        if (lVar3 == 0) goto LAB_100813300;
      }
      if (*(long *)((long)param_1 + 0x138) != 0) {
        lVar3 = FUN_10087d170(*(long *)((long)param_1 + 0x138),
                              *(undefined8 *)((long)param_1 + 0x130));
        *(long *)((long)pvVar2 + 0x138) = lVar3;
        if (lVar3 == 0) goto LAB_100813300;
      }
      if (param_2 == 0) {
        *(undefined8 *)((long)pvVar2 + 0x150) = 0;
        *(undefined8 *)((long)pvVar2 + 0x148) = 0;
      }
      else {
        lVar3 = FUN_10087d170(*(undefined8 *)((long)param_1 + 0x140),
                              *(undefined8 *)((long)param_1 + 0x148));
        *(long *)((long)pvVar2 + 0x140) = lVar3;
        if (lVar3 == 0) goto LAB_100813300;
      }
      if (*(long *)((long)param_1 + 0x158) == 0) {
        return pvVar2;
      }
      lVar3 = FUN_10087d050();
      *(long *)((long)pvVar2 + 0x158) = lVar3;
      if (lVar3 != 0) {
        return pvVar2;
      }
    }
  }
LAB_100813300:
  FUN_100887ce0(0x14,0x15c,0x41,"ssl_sess.c",0x15d);
  FUN_100813340(pvVar2);
  return (void *)0x0;
}

