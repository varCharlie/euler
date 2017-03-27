#!/usr/bin/env ruby
=begin
gmail: suspects
author: charles pantoga
purpose: Implement mathematical functions related to Euler
=end

module Math
  extend Math

  def factorial(n)
    n.downto(1).to_a.reduce(:*)
  end

  def fact_r(n)
    if n == 0
      1
    else
      n * fact_r(n-1)
    end
  end

  module Euler
    extend Euler
    def e(n)
      (1..(n)).reduce do |reduction, x|
        reduction += (1.0 / Math::factorial(x))
      end + 1
    end

    def eulers(n)
      (1..(n)).reduce do |reduction, x|
        reduction += (1.0 / x**2)
      end
    end
  end
end

