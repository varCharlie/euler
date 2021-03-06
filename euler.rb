#!/usr/bin/env ruby
=begin
gmail: suspects
author: charles pantoga
purpose: Implement mathematical functions related to Euler
=end

module Math
  extend self

  def factorial(n)
    n.downto(1).to_a.reduce(:*)
  end

  def fact_r(n)
    n == 0 ? 1 : n*fact_r(n-1)
  end

  def e(n)
    1.upto(n).reduce { |r,x| r += (1.0/Math.factorial(x)) }
  end

  def euler(n)
    1.upto(n).reduce { |r,x| r += (1.0/(x**2)) }
  end
end

