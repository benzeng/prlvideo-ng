
void FUN_1001bad60(CTaskGenericId *param_1)

{
  CTaskGenericId::~CTaskGenericId(param_1);
  operator_delete(param_1);
  return;
}

