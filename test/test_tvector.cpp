#include "utmatrix.h"

#include <gtest.h>

{
TEST(TVector, can_create_vector_with_positive_length)
{
  ASSERT_NO_THROW(TVector<int> v(5));//проверка на исключения
}

TEST(TVector, cant_create_too_large_vector)
{
  ASSERT_ANY_THROW(TVector<int> v(MAX_VECTOR_SIZE + 1));//проверка на создание слишком большого вектора
}

TEST(TVector, throws_when_create_vector_with_negative_length)//вектор отрицательной длины
{
  ASSERT_ANY_THROW(TVector<int> v(-5));
}

TEST(TVector, throws_when_create_vector_with_negative_startindex)//отрицательный старт индекс
{
  ASSERT_ANY_THROW(TVector<int> v(5, -2));
}

TEST(TVector, can_create_copied_vector)//можно создать скопировванный вектор
{
  TVector<int> v(10);

  ASSERT_NO_THROW(TVector<int> v1(v));
}

TEST(TVector, copied_vector_is_equal_to_source_one)//
{
  ADD_FAILURE();
}

TEST(TVector, copied_vector_has_its_own_memory)//скопированный вектор имеет собственную память
{
  ADD_FAILURE();
}

TEST(TVector, can_get_size)//может получить размер
{
  TVector<int> v(4);

  EXPECT_EQ(4, v.GetSize());
}

TEST(TVector, can_get_start_index)//может получить стартовый индекс
{
  TVector<int> v(4, 2);

  EXPECT_EQ(2, v.GetStartIndex());
}

TEST(TVector, can_set_and_get_element)//может получать и устанавливать элемент
{
  TVector<int> v(4);
  v[0] = 4;

  EXPECT_EQ(4, v[0]);
}

TEST(TVector, throws_when_set_element_with_negative_index)//отрицательный элемент
{
  ADD_FAILURE();
}

TEST(TVector, throws_when_set_element_with_too_large_index)//установлен слишком большой индекс
{
  ADD_FAILURE();
}

TEST(TVector, can_assign_vector_to_itself)//назначает себе вектор
{
  ADD_FAILURE();
}

TEST(TVector, can_assign_vectors_of_equal_size)//векторы равного размера
{
  ADD_FAILURE();
}

TEST(TVector, assign_operator_change_vector_size)//изменение размера индекса
{
  ADD_FAILURE();
}

TEST(TVector, can_assign_vectors_of_different_size)//векторы разного размера
{
  ADD_FAILURE();
}

TEST(TVector, compare_equal_vectors_return_true)//сравнивая одинаковые векторы вернуть "верно"
{
  ADD_FAILURE();
}

TEST(TVector, compare_vector_with_itself_return_true)//сравнить вектор с собой вернуть истина
{
  ADD_FAILURE();
}

TEST(TVector, vectors_with_different_size_are_not_equal)//сравнивает векторы разного размера
{
  ADD_FAILURE();
}

TEST(TVector, can_add_scalar_to_vector)
{
  ADD_FAILURE();
}

TEST(TVector, can_subtract_scalar_from_vector)
{
  ADD_FAILURE();
}

TEST(TVector, can_multiply_scalar_by_vector)
{
  ADD_FAILURE();
}

TEST(TVector, can_add_vectors_with_equal_size)
{
  ADD_FAILURE();
}

TEST(TVector, cant_add_vectors_with_not_equal_size)
{
  ADD_FAILURE();
}

TEST(TVector, can_subtract_vectors_with_equal_size)
{
  ADD_FAILURE();
}

TEST(TVector, cant_subtract_vectors_with_not_equal_size)
{
  ADD_FAILURE();
}

TEST(TVector, can_multiply_vectors_with_equal_size)
{
  ADD_FAILURE();
}

TEST(TVector, cant_multiply_vectors_with_not_equal_size)
{
  ADD_FAILURE();
}

}