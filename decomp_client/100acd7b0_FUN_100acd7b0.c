
void FUN_100acd7b0(undefined8 param_1,int param_2)

{
  if (param_2 != -1) {
    FUN_100df99c0("CHRCLIENT","ChrToolClient",0,
                  "CoherenceToolClient: Unknown Error occuried. code = %d",param_2);
    return;
  }
  FUN_100df99c0("CHRCLIENT","ChrToolClient",0,
                "CoherenceToolClient: Window creation error occuried. code = %d. Switch Coherence Mode off."
                ,0xffffffff);
  FUN_100ae0620(param_1,0xffffffff);
  return;
}

