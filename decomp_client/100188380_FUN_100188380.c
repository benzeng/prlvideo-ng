
void FUN_100188380(char *param_1)

{
  char *pcVar1;
  int *piVar2;
  undefined *puVar3;
  QVariant local_38;
  undefined1 local_21;
  
  param_1[0x68] = '\x01';
  param_1[0x69] = '\0';
  param_1[0x6a] = '\0';
  param_1[0x6b] = '\0';
  param_1[0x6c] = '\x01';
  param_1[0x6d] = '\0';
  param_1[0x6e] = '\0';
  param_1[0x6f] = '\0';
  param_1[0x9c] = '\0';
  param_1[0x98] = '\0';
  param_1[0x99] = '\0';
  param_1[0x9a] = '\0';
  param_1[0x9b] = '\0';
  piVar2 = *(int **)(param_1 + 0xa0);
  if (piVar2 != (int *)0x0) {
    pcVar1 = param_1 + 0xa0;
    LOCK();
    *piVar2 = *piVar2 + -1;
    local_21 = *piVar2 != 0;
    UNLOCK();
    if ((!(bool)local_21) && (*(void **)pcVar1 != (void *)0x0)) {
      operator_delete(*(void **)pcVar1);
    }
    param_1[0xa8] = '\0';
    param_1[0xa9] = '\0';
    param_1[0xaa] = '\0';
    param_1[0xab] = '\0';
    param_1[0xac] = '\0';
    param_1[0xad] = '\0';
    param_1[0xae] = '\0';
    param_1[0xaf] = '\0';
    pcVar1[0] = '\0';
    pcVar1[1] = '\0';
    pcVar1[2] = '\0';
    pcVar1[3] = '\0';
    pcVar1[4] = '\0';
    pcVar1[5] = '\0';
    pcVar1[6] = '\0';
    pcVar1[7] = '\0';
  }
  param_1[0xb0] = '\0';
  param_1[0xb1] = '\0';
  param_1[0xd8] = '\0';
  param_1[0xd9] = '\0';
  param_1[0xf0] = '\0';
  param_1[0x110] = '\0';
  param_1[0x111] = '\0';
  param_1[0x112] = '\0';
  param_1[0x113] = '\0';
  param_1[0x114] = '\0';
  param_1[0x115] = '\0';
  param_1[0x116] = '\0';
  param_1[0x117] = '\0';
  param_1[0x108] = '\0';
  param_1[0x109] = '\0';
  param_1[0x10a] = '\0';
  param_1[0x10b] = '\0';
  param_1[0x10c] = '\0';
  param_1[0x10d] = '\0';
  param_1[0x10e] = '\0';
  param_1[0x10f] = '\0';
  param_1[0x100] = '\0';
  puVar3 = PTR_s_AppContext_102270dc0;
  param_1[0x101] = '\0';
  param_1[0x102] = '\0';
  param_1[0x103] = '\0';
  param_1[0x104] = '\0';
  param_1[0x105] = '\0';
  param_1[0x106] = '\0';
  param_1[0x107] = '\0';
  QVariant::QVariant(&local_38,3);
  QObject::setProperty(param_1,(QVariant *)puVar3);
  QVariant::~QVariant(&local_38);
  return;
}

