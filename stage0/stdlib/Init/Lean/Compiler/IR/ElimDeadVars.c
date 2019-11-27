// Lean compiler output
// Module: Init.Lean.Compiler.IR.ElimDeadVars
// Imports: Init.Lean.Compiler.IR.Basic Init.Lean.Compiler.IR.FreeVars
#include "runtime/lean.h"
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#elif defined(__GNUC__) && !defined(__CLANG__)
#pragma GCC diagnostic ignored "-Wunused-parameter"
#pragma GCC diagnostic ignored "-Wunused-label"
#pragma GCC diagnostic ignored "-Wunused-but-set-variable"
#endif
#ifdef __cplusplus
extern "C" {
#endif
extern uint8_t l_String_anyAux___main___at_String_all___spec__1___closed__1;
lean_object* l_Lean_IR_FnBody_elimDead(lean_object*);
extern uint8_t l_String_Iterator_extract___closed__1;
lean_object* l_RBNode_findCore___main___at___private_Init_Lean_Compiler_IR_FreeVars_14__collectIndex___spec__1(lean_object*, lean_object*);
extern lean_object* l_Array_empty___closed__1;
extern lean_object* l_Lean_IR_Inhabited;
lean_object* lean_array_get_size(lean_object*);
lean_object* l_Array_back___at_Lean_IR_reshapeWithoutDeadAux___main___spec__1___boxed(lean_object*);
lean_object* lean_nat_add(lean_object*, lean_object*);
lean_object* lean_array_fget(lean_object*, lean_object*);
lean_object* lean_nat_sub(lean_object*, lean_object*);
lean_object* lean_array_get(lean_object*, lean_object*, lean_object*);
lean_object* lean_array_fset(lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_freeIndices(lean_object*);
lean_object* l_Lean_IR_reshapeWithoutDeadAux___main(lean_object*, lean_object*, lean_object*);
uint8_t l_Array_isEmpty___rarg(lean_object*);
lean_object* l_Lean_IR_reshapeWithoutDeadAux(lean_object*, lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_IR_reshapeWithoutDeadAux___main___spec__1(lean_object*);
lean_object* l_Lean_IR_reshapeWithoutDead(lean_object*, lean_object*);
lean_object* l_Lean_IR_Decl_elimDead(lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_FnBody_elimDead___main___spec__1(lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_setBody(lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_flatten(lean_object*);
lean_object* l_Array_umapMAux___main___at_Lean_IR_FnBody_elimDead___main___spec__2(lean_object*, lean_object*);
lean_object* lean_array_pop(lean_object*);
lean_object* l_Lean_IR_FnBody_elimDead___main(lean_object*);
uint8_t l_Bool_DecidableEq(uint8_t, uint8_t);
lean_object* l_unsafeCast(lean_object*, lean_object*, lean_object*, lean_object*);
lean_object* l_Lean_IR_FnBody_collectFreeIndices(lean_object*, lean_object*);
uint8_t lean_nat_dec_lt(lean_object*, lean_object*);
lean_object* l_Array_back___at_Lean_IR_reshapeWithoutDeadAux___main___spec__1(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = lean_array_get_size(x_1);
x_3 = lean_unsigned_to_nat(1u);
x_4 = lean_nat_sub(x_2, x_3);
lean_dec(x_2);
x_5 = l_Lean_IR_Inhabited;
x_6 = lean_array_get(x_5, x_1, x_4);
lean_dec(x_4);
return x_6;
}
}
lean_object* l_Lean_IR_reshapeWithoutDeadAux___main(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
uint8_t x_4; uint8_t x_5; uint8_t x_6; 
x_4 = l_Array_isEmpty___rarg(x_1);
x_5 = 1;
x_6 = l_Bool_DecidableEq(x_4, x_5);
if (x_6 == 0)
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_14; 
x_7 = l_Array_back___at_Lean_IR_reshapeWithoutDeadAux___main___spec__1(x_1);
x_8 = lean_array_pop(x_1);
switch (lean_obj_tag(x_7)) {
case 0:
{
lean_object* x_23; 
x_23 = lean_ctor_get(x_7, 0);
lean_inc(x_23);
x_14 = x_23;
goto block_22;
}
case 1:
{
lean_object* x_24; 
x_24 = lean_ctor_get(x_7, 0);
lean_inc(x_24);
x_14 = x_24;
goto block_22;
}
default: 
{
lean_object* x_25; 
x_25 = lean_box(0);
x_9 = x_25;
goto block_13;
}
}
block_13:
{
lean_object* x_10; lean_object* x_11; 
lean_dec(x_9);
lean_inc(x_7);
x_10 = l_Lean_IR_FnBody_collectFreeIndices(x_7, x_3);
x_11 = l_Lean_IR_FnBody_setBody(x_7, x_2);
x_1 = x_8;
x_2 = x_11;
x_3 = x_10;
goto _start;
}
block_22:
{
lean_object* x_15; 
x_15 = l_RBNode_findCore___main___at___private_Init_Lean_Compiler_IR_FreeVars_14__collectIndex___spec__1(x_3, x_14);
lean_dec(x_14);
if (lean_obj_tag(x_15) == 0)
{
uint8_t x_16; 
x_16 = l_String_anyAux___main___at_String_all___spec__1___closed__1;
if (x_16 == 0)
{
lean_dec(x_7);
x_1 = x_8;
goto _start;
}
else
{
lean_object* x_18; 
x_18 = lean_box(0);
x_9 = x_18;
goto block_13;
}
}
else
{
uint8_t x_19; 
lean_dec(x_15);
x_19 = l_String_Iterator_extract___closed__1;
if (x_19 == 0)
{
lean_dec(x_7);
x_1 = x_8;
goto _start;
}
else
{
lean_object* x_21; 
x_21 = lean_box(0);
x_9 = x_21;
goto block_13;
}
}
}
}
else
{
lean_dec(x_3);
lean_dec(x_1);
return x_2;
}
}
}
lean_object* l_Array_back___at_Lean_IR_reshapeWithoutDeadAux___main___spec__1___boxed(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Array_back___at_Lean_IR_reshapeWithoutDeadAux___main___spec__1(x_1);
lean_dec(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_reshapeWithoutDeadAux(lean_object* x_1, lean_object* x_2, lean_object* x_3) {
_start:
{
lean_object* x_4; 
x_4 = l_Lean_IR_reshapeWithoutDeadAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Lean_IR_reshapeWithoutDead(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; lean_object* x_4; 
lean_inc(x_2);
x_3 = l_Lean_IR_FnBody_freeIndices(x_2);
x_4 = l_Lean_IR_reshapeWithoutDeadAux___main(x_1, x_2, x_3);
return x_4;
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_FnBody_elimDead___main___spec__1(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = l_Array_empty___closed__1;
x_6 = x_2;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; lean_object* x_13; 
x_7 = lean_array_fget(x_2, x_1);
x_8 = lean_box(0);
lean_inc(x_7);
x_9 = x_8;
x_10 = lean_array_fset(x_2, x_1, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
if (lean_obj_tag(x_7) == 1)
{
lean_object* x_18; lean_object* x_19; lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; 
x_18 = lean_ctor_get(x_7, 0);
lean_inc(x_18);
x_19 = lean_ctor_get(x_7, 1);
lean_inc(x_19);
x_20 = lean_ctor_get(x_7, 2);
lean_inc(x_20);
x_21 = lean_ctor_get(x_7, 3);
lean_inc(x_21);
x_22 = l_Lean_IR_FnBody_elimDead___main(x_20);
x_23 = lean_alloc_ctor(1, 4, 0);
lean_ctor_set(x_23, 0, x_18);
lean_ctor_set(x_23, 1, x_19);
lean_ctor_set(x_23, 2, x_22);
lean_ctor_set(x_23, 3, x_21);
x_13 = x_23;
goto block_17;
}
else
{
lean_inc(x_7);
x_13 = x_7;
goto block_17;
}
block_17:
{
lean_object* x_14; lean_object* x_15; 
x_14 = x_13;
x_15 = lean_array_fset(x_10, x_1, x_14);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_15;
goto _start;
}
}
}
}
lean_object* l_Array_umapMAux___main___at_Lean_IR_FnBody_elimDead___main___spec__2(lean_object* x_1, lean_object* x_2) {
_start:
{
lean_object* x_3; uint8_t x_4; 
x_3 = lean_array_get_size(x_2);
x_4 = lean_nat_dec_lt(x_1, x_3);
lean_dec(x_3);
if (x_4 == 0)
{
lean_object* x_5; lean_object* x_6; 
lean_dec(x_1);
x_5 = l_Array_empty___closed__1;
x_6 = x_2;
return x_6;
}
else
{
lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; lean_object* x_11; lean_object* x_12; 
x_7 = lean_array_fget(x_2, x_1);
x_8 = lean_box(0);
lean_inc(x_7);
x_9 = x_8;
x_10 = lean_array_fset(x_2, x_1, x_9);
x_11 = lean_unsigned_to_nat(1u);
x_12 = lean_nat_add(x_1, x_11);
if (lean_obj_tag(x_7) == 0)
{
lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; lean_object* x_18; 
x_13 = lean_ctor_get(x_7, 0);
lean_inc(x_13);
x_14 = lean_ctor_get(x_7, 1);
lean_inc(x_14);
x_15 = l_Lean_IR_FnBody_elimDead___main(x_14);
x_16 = lean_alloc_ctor(0, 2, 0);
lean_ctor_set(x_16, 0, x_13);
lean_ctor_set(x_16, 1, x_15);
x_17 = x_16;
x_18 = lean_array_fset(x_10, x_1, x_17);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_18;
goto _start;
}
else
{
lean_object* x_20; lean_object* x_21; lean_object* x_22; lean_object* x_23; lean_object* x_24; 
x_20 = lean_ctor_get(x_7, 0);
lean_inc(x_20);
x_21 = l_Lean_IR_FnBody_elimDead___main(x_20);
x_22 = lean_alloc_ctor(1, 1, 0);
lean_ctor_set(x_22, 0, x_21);
x_23 = x_22;
x_24 = lean_array_fset(x_10, x_1, x_23);
lean_dec(x_1);
x_1 = x_12;
x_2 = x_24;
goto _start;
}
}
}
}
lean_object* l_Lean_IR_FnBody_elimDead___main(lean_object* x_1) {
_start:
{
lean_object* x_2; lean_object* x_3; lean_object* x_4; lean_object* x_5; lean_object* x_6; 
x_2 = l_Lean_IR_FnBody_flatten(x_1);
x_3 = lean_ctor_get(x_2, 0);
lean_inc(x_3);
x_4 = lean_ctor_get(x_2, 1);
lean_inc(x_4);
lean_dec(x_2);
x_5 = lean_unsigned_to_nat(0u);
x_6 = l_Array_umapMAux___main___at_Lean_IR_FnBody_elimDead___main___spec__1(x_5, x_3);
if (lean_obj_tag(x_4) == 10)
{
uint8_t x_7; 
x_7 = !lean_is_exclusive(x_4);
if (x_7 == 0)
{
lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_8 = lean_ctor_get(x_4, 3);
x_9 = l_Array_umapMAux___main___at_Lean_IR_FnBody_elimDead___main___spec__2(x_5, x_8);
lean_ctor_set(x_4, 3, x_9);
x_10 = l_Lean_IR_reshapeWithoutDead(x_6, x_4);
return x_10;
}
else
{
lean_object* x_11; lean_object* x_12; lean_object* x_13; lean_object* x_14; lean_object* x_15; lean_object* x_16; lean_object* x_17; 
x_11 = lean_ctor_get(x_4, 0);
x_12 = lean_ctor_get(x_4, 1);
x_13 = lean_ctor_get(x_4, 2);
x_14 = lean_ctor_get(x_4, 3);
lean_inc(x_14);
lean_inc(x_13);
lean_inc(x_12);
lean_inc(x_11);
lean_dec(x_4);
x_15 = l_Array_umapMAux___main___at_Lean_IR_FnBody_elimDead___main___spec__2(x_5, x_14);
x_16 = lean_alloc_ctor(10, 4, 0);
lean_ctor_set(x_16, 0, x_11);
lean_ctor_set(x_16, 1, x_12);
lean_ctor_set(x_16, 2, x_13);
lean_ctor_set(x_16, 3, x_15);
x_17 = l_Lean_IR_reshapeWithoutDead(x_6, x_16);
return x_17;
}
}
else
{
lean_object* x_18; 
x_18 = l_Lean_IR_reshapeWithoutDead(x_6, x_4);
return x_18;
}
}
}
lean_object* l_Lean_IR_FnBody_elimDead(lean_object* x_1) {
_start:
{
lean_object* x_2; 
x_2 = l_Lean_IR_FnBody_elimDead___main(x_1);
return x_2;
}
}
lean_object* l_Lean_IR_Decl_elimDead(lean_object* x_1) {
_start:
{
if (lean_obj_tag(x_1) == 0)
{
uint8_t x_2; 
x_2 = !lean_is_exclusive(x_1);
if (x_2 == 0)
{
lean_object* x_3; lean_object* x_4; 
x_3 = lean_ctor_get(x_1, 3);
x_4 = l_Lean_IR_FnBody_elimDead___main(x_3);
lean_ctor_set(x_1, 3, x_4);
return x_1;
}
else
{
lean_object* x_5; lean_object* x_6; lean_object* x_7; lean_object* x_8; lean_object* x_9; lean_object* x_10; 
x_5 = lean_ctor_get(x_1, 0);
x_6 = lean_ctor_get(x_1, 1);
x_7 = lean_ctor_get(x_1, 2);
x_8 = lean_ctor_get(x_1, 3);
lean_inc(x_8);
lean_inc(x_7);
lean_inc(x_6);
lean_inc(x_5);
lean_dec(x_1);
x_9 = l_Lean_IR_FnBody_elimDead___main(x_8);
x_10 = lean_alloc_ctor(0, 4, 0);
lean_ctor_set(x_10, 0, x_5);
lean_ctor_set(x_10, 1, x_6);
lean_ctor_set(x_10, 2, x_7);
lean_ctor_set(x_10, 3, x_9);
return x_10;
}
}
else
{
return x_1;
}
}
}
lean_object* initialize_Init_Lean_Compiler_IR_Basic(lean_object*);
lean_object* initialize_Init_Lean_Compiler_IR_FreeVars(lean_object*);
static bool _G_initialized = false;
lean_object* initialize_Init_Lean_Compiler_IR_ElimDeadVars(lean_object* w) {
lean_object * res;
if (_G_initialized) return lean_mk_io_result(lean_box(0));
_G_initialized = true;
res = initialize_Init_Lean_Compiler_IR_Basic(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
res = initialize_Init_Lean_Compiler_IR_FreeVars(lean_io_mk_world());
if (lean_io_result_is_error(res)) return res;
lean_dec_ref(res);
return lean_mk_io_result(lean_box(0));
}
#ifdef __cplusplus
}
#endif
